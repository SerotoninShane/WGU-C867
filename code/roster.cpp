#include "roster.h"
#include <iostream>
#include <regex>

// This allows us to avoid using std:: everywhere in the .cpp file
using namespace std;

Roster::Roster() : numStudents(0) {
    for (int i = 0; i < 5; ++i) { // Initialize array to nullptr
        classRosterArray[i] = nullptr;
    }
}

// Destructor
Roster::~Roster() {
    for (int i = 0; i < numStudents; ++i) {
        delete classRosterArray[i];
    }
}

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    if (numStudents < 5) {
        int daysToComplete[] = { daysInCourse1, daysInCourse2, daysInCourse3 };
        classRosterArray[numStudents] = new Student(studentID, firstName, lastName, emailAddress, age, daysToComplete, degreeProgram);
        ++numStudents;
    } else {
        std::cout << "Error: Roster is full." << std::endl;
    }
}

void Roster::remove(std::string studentID) {
    bool found = false;
    for (int i = 0; i < numStudents; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[numStudents - 1]; // Move the last student to the current position
            classRosterArray[numStudents - 1] = nullptr; // Set the last position to nullptr
            --numStudents;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Error: Student ID not found." << std::endl;
    }
}

// Print all students
void Roster::printAll() {
    for (int i = 0; i < numStudents; ++i) {
        classRosterArray[i]->print();
    }
}

// Print average days in course for a specific student
void Roster::printAverageDaysInCourse(std::string studentID) {
    for (int i = 0; i < numStudents; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int* days = classRosterArray[i]->getDaysToComplete();
            double average = (days[0] + days[1] + days[2]) / 3.0;
            std::cout << "Average days in course for student ID " << studentID << ": " << average << std::endl;
            return;
        }
    }
    std::cout << "Error: Student ID not found." << std::endl;
}

// Print invalid email addresses
void Roster::printInvalidEmails() {
    std::regex emailPattern("^[\\w\\.-]+@([\\w\\.-]+)\\.[a-zA-Z]{2,}$"); // email verification regex 
    for (int i = 0; i < numStudents; ++i) {
        std::string email = classRosterArray[i]->getEmailAddress();
        if (email.find(' ') != std::string::npos || !std::regex_match(email, emailPattern)) {
            std::cout << "Invalid email: " << email << std::endl;
        }
    }
}

// Print students by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < numStudents; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}