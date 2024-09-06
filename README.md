# WGU-C867

## A
**Modify the “studentData Table” to include your personal information as the last item**:

- "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
- "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
- "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
- "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
- "A5,Shane,Bogue,sbogue4401@gmail.com,18,1,2,3,SOFTWARE"

## B
**Create a C++ project in your integrated development environment (IDE) with the following files**:

- ☑ degree.h

- ☑ student.h and student.cpp

- ☑ roster.h and roster.cpp

- ☑ main.cpp

## C
**Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE**:

- degree.h: Added 'enum DegreeProgram {SECURITY, NETWORK, SOFTWARE};'

## D
### 1.
**Create the class Student  in the files student.h and student.cpp, which includes each of the following variables**:

•  student ID
•  first name
•  last name
•  email address
•  age
•  array of number of days to complete each course
•  degree program

- Student ID: Implemented as std::string studentID;.
- First Name: Implemented as std::string firstName;.
- Last Name: Implemented as std::string lastName;.
- Email Address: Implemented as std::string emailAddress;.
- Age: Implemented as int age;.
- Array of number of days to complete each course: Implemented as int daysToComplete[3];.
- Degree Program: Implemented as DegreeProgram degreeProgram; where DegreeProgram is an enumerated type (defined in degree.h).

### 2.
**Create each of the following functions in the Student class**:

a.  an accessor (i.e., getter) for each instance variable from part D1
b.  a mutator (i.e., setter) for each instance variable from part D1
c.  ☑ All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
d.  constructor using all of the input parameters provided in the table
e.  print() to print specific student data

**Getters**
- getStudentID()
- getFirstName()
- getLastName()
- getEmailAddress()
- getAge()
- getDaysToComplete()
- getDegreeProgram()

**Setters**
- setStudentID()
- setFirstName()
- setLastName()
- setEmailAddress()
- setAge()
- setDaysToComplete()
- setDegreeProgram()

**Constructor w/ Input Parameters**
- Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram);

**Print Method**
- Outputs: Student ID, first name, last name, email address, age, days to complete courses, and degree program.


