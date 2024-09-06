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

    // Parse student data and add to classRoster
    classRoster.parseAndAddStudents(studentData, (sizeof(studentData) / sizeof(studentData[0])));

    // 4. Convert pseudo code to complete the rest of the main() function:

    // a. Print all students
    cout << "\nAll students:\n";
    classRoster.printAll();

    // b. Print invalid email addresses
    cout << "\nInvalid emails:\n";
    classRoster.printInvalidEmails();

    // c. Print average days in courses for each student
    cout << "\nAverage days in courses:\n";
    for (int i = 0; i < classRoster.getNumStudents(); ++i) {
        classRoster.printAverageDaysInCourse(classRoster.getStudentID(i));
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