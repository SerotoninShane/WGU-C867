#include <iostream>
#include "roster.h"

using namespace std; // Use the std namespace for cleaner code

int main() {
    // 1. Print course title, programming language, WGU student ID, and your name.
    cout << "Course Title: C867 - Scripting and Programming: Applications\n";
    cout << "Programming Language: C++\n";
    cout << "WGU Student ID: 012258401\n"; //
    cout << "Shane Bogue\n"; //
    cout << endl;

    // 2. Create an instance of the Roster class called classRoster
    Roster classRoster;

    // 3. Add each student to classRoster
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",         // Invalid email (contains ' ')
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",   // Invalid email (missing '.')
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",      // Invalid email (missing '@')
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Shane,Bogue,sbogue4401@gmail.com,18,1,2,3,SOFTWARE"
    };

    // Parsing student data and adding it to classRoster
    for (string data : studentData) {
        // Parse each student's data
        size_t rhs = 0; // Start position
        size_t lhs = data.find(','); // Position of first comma
        
        string studentID = data.substr(rhs, lhs - rhs);
        rhs = lhs + 1;
        lhs = data.find(',', rhs);
        
        string firstName = data.substr(rhs, lhs - rhs);
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        string lastName = data.substr(rhs, lhs - rhs);
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        string emailAddress = data.substr(rhs, lhs - rhs);
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        int age = stoi(data.substr(rhs, lhs - rhs));
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        int daysInCourse1 = stoi(data.substr(rhs, lhs - rhs));
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        int daysInCourse2 = stoi(data.substr(rhs, lhs - rhs));
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        int daysInCourse3 = stoi(data.substr(rhs, lhs - rhs));
        rhs = lhs + 1;
        lhs = data.find(',', rhs);

        DegreeProgram degreeProgram;
        string degree = data.substr(rhs, lhs - rhs);
        if (degree == "SECURITY") {
            degreeProgram = SECURITY;
        } else if (degree == "NETWORK") {
            degreeProgram = NETWORK;
        } else if (degree == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        }

        // Add the student to the roster
        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    }

    // 4. Convert pseudo code to complete the rest of the main() function:

    // a. Print all students
    cout << "\nAll students:\n";
    classRoster.printAll();

    // b. Print invalid email addresses
    cout << "\nInvalid emails:\n";
    classRoster.printInvalidEmails();

    // c. Print average days in courses for each student
    cout << "\nAverage days in courses:\n";
    for (int i = 0; i < 5; ++i) { // Loop through classRosterArray
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }

    // d. Print students by degree program (SOFTWARE)
    cout << "\nStudents in SOFTWARE program:\n";
    classRoster.printByDegreeProgram(SOFTWARE);

    // e. Remove student with ID "A3"
    cout << "\nRemoving student A3:\n";
    classRoster.remove("A3");

    // f. Print all students after removal
    cout << "\nAll students after removal of A3:\n";
    classRoster.printAll();

    // g. Try to remove student A3 again (should print an error)
    cout << "\nAttempting to remove A3 again:\n";
    classRoster.remove("A3");

    // 5. Destructor will automatically be called at program exit, releasing all memory when/ if it exsists normally.

    return 0;
}