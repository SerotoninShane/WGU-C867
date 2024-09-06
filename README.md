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

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

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

## E
**Create a Roster class (roster.cpp) by doing the following:**

### 1.
**Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”**

### 2.
**Create a student object for each student in the data table and populate classRosterArray.**

a.  Parse each set of data identified in the “studentData Table.”

b.  Add each student object to classRosterArray.

### 3.
**Define the following functions**:

a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)  that sets the instance variables from part D1 and updates the roster.

b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.

d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.

    Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').

f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.

**Create an array of pointers (classRosterArray) to hold the student data from the “studentData Table.”**

- Implemented an array of pointers to Student objects, classRosterArray[5], in the Roster class.
- Initialized the array to store nullptr values initially, and later populated it with Student objects.

**Create a Student object for each student in the data table and populate classRosterArray.**

- Each student from the table is parsed and added to classRosterArray using the add() method.
- The add() method constructs a Student object and assigns it to the array.

**Formatted the following functions:**

**add()**

- Implemented: A public method add() that takes the student data (ID, name, email, age, days in course, degree program) as parameters and adds a new Student object to classRosterArray.

**remove()**

- Implemented: A public method remove() that removes a student from classRosterArray by student ID. If the ID does not exist, an error message is printed.

**printAll()**

- Implemented: A public method printAll() that loops through all students in classRosterArray and calls the print() method for each student to output their information.

**printAverageDaysInCourse()**

- Implemented: A public method printAverageDaysInCourse() that calculates and prints the average number of days in courses for a given student, identified by their student ID.

**printInvalidEmails()**

- Implemented: A public method printInvalidEmails() that checks for invalid email addresses (those missing an @, a . or containing spaces) and prints any invalid emails found.

**printByDegreeProgram()**

- Implemented: A public method printByDegreeProgram() that prints the data of students enrolled in a specified degree program (SECURITY, NETWORK, or SOFTWARE).

## F.
**Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:**

1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.

2.  Create an instance of the Roster class called classRoster.

3.  Add each student to classRoster.

4.  Convert the following pseudo code to complete the rest of the  main() function:

classRoster.printAll();

classRoster.printInvalidEmails();



//loop through classRosterArray and for each element:

classRoster.printAverageDaysInCourse(/*current_object's student id*/);



Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.



classRoster.printByDegreeProgram(SOFTWARE);

classRoster.remove("A3");

classRoster.printAll();

classRoster.remove("A3");

//expected: the above line should print a message saying such a student with this ID was not found.

5.  Implement the destructor to release the memory that was allocated dynamically in Roster.

**EACH STEP IS LABELED IN MAIN.CPP**

**In VSC I just used the quick command 'CTRL+SHT+B' to create main.exe; I then, in the terminal, ran it with './main.exe'**




