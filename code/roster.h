#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"

class Roster {

private:
    Student* classRosterArray[5];
    int numStudents;

public:
    Roster();
    ~Roster();

    void parseAndAddStudents(const std::string studentData[], int size);

    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(std::string studentID);
    void printAll();
    void printAverageDaysInCourse(std::string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

    int getNumStudents() const;
    std::string getStudentID(int index) const;
    
};

#endif