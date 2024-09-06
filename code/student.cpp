#include "student.h"
#include <iostream>

// This allows us to avoid using std:: everywhere in the .cpp file
using namespace std;

// Constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
    this->degreeProgram = degreeProgram;
}

// Destructor
Student::~Student() {}

// Getters
string Student::getStudentID() const {
    return studentID;
}

string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

string Student::getEmailAddress() const {
    return emailAddress;
}

int Student::getAge() const {
    return age;
}

int* Student::getDaysToComplete() {
    return daysToComplete;
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

// Setters
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysToComplete(int daysToComplete[]) {
    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

// Print method
void Student::print() {
    cout << "Student ID: " << getStudentID() << "\t";
    cout << "First Name: " << getFirstName() << "\t";
    cout << "Last Name: " << getLastName() << "\t";
    cout << "Email: " << getEmailAddress() << "\t";
    cout << "Age: " << getAge() << "\t";
    cout << "Days in course: {";
    for (int i = 0; i < 3; i++) {
        cout << daysToComplete[i];
        if (i < 2) cout << ", ";
    }
    cout << "} \t";
    cout << "Degree Program: ";

       switch (degreeProgram) {
        case SECURITY:
            cout << "SECURITY";
            break;
        case NETWORK:
            cout << "NETWORK";
            break;
        case SOFTWARE:
            cout << "SOFTWARE";
            break;
        default:
            cout << "UNKNOWN";
            break;
    }
    
    cout<< endl;
}