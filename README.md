
# Student Record Management System (C Programming)

##  Overview
This project is a **console-based Student Record Management System** developed in **C programming language**.

It allows users to **store, manage, search, and analyze student data** through a structured and menu-driven interface.  
The system demonstrates core programming concepts such as **structures, arrays, functions, and data processing**.

This project focuses on building strong fundamentals in **problem solving and structured programming**.

---

##  Features

###  Student Management
- Add new student records  
- Store:
  - Student ID  
  - Name  
  - Age  
  - Grades (3 courses)  

---

###  Search & Display
- Display all stored students  
- Search student by ID  
- View detailed student information  

---

###  Grade Analysis
- Find **maximum and minimum grades** across all students  
- Display grades for a specific course  
- Calculate **average grade** for a selected student  

---

##  System Design

The system is built using a structured approach:

### 🔹 Data Structure
Each student is represented using a `struct`:

```c
struct student {
    int id;
    char name[30];
    int age;
    float grades[3];
};
````

 Students are stored in an array with a maximum capacity of 100 records .

---

###  Core Functions

The program is divided into modular functions:

* `insert()` → Add new student
* `display()` → Show all students
* `search()` → Find student by ID
* `maxim_minim()` → Find min & max grades
* `displaygrade()` → Show grades per course
* `averagegrade()` → Calculate student average

 This modular design improves readability and maintainability.

---

##  Program Flow

### Main Menu

```
1. Insert Student Data
2. Display All Students
3. Search Student by ID
4. Grade Analysis Functions
0. Exit
```

### Analysis Menu

```
1. Find Max & Min Grades
2. Display Grades for Each Course
3. Calculate Average Grade
```

---

##  How to Compile & Run

###  Requirements

* GCC Compiler (or any C compiler)

---

###  Steps

1. Navigate to project folder:

```bash
cd your-folder
```

2. Compile the program:

```bash
gcc problemSolvingProject.c -o student_system
```

3. Run the program:

**Windows**

```bash
student_system
```

**Mac/Linux**

```bash
./student_system
```

---

##  Example Use Cases

* Add multiple students and store their grades
* Quickly search for a student using ID
* Analyze performance across subjects
* Identify highest and lowest scores
* Calculate average performance

---

##  What I Learned

* Working with **structures and arrays in C**
* Designing **menu-driven applications**
* Implementing **searching and data processing logic**
* Writing **modular and reusable functions**
* Handling user input and program flow

---

##  Limitations

* Data is stored in memory only (not persistent)
* Maximum limit of 100 students
* No input validation for incorrect data types
* Console-based UI only

---

##  Future Improvements

* Add file handling (save/load data)
* Implement update & delete functionality
* Support more courses and flexible grading
* Add GPA calculation
* Improve input validation
* Build a GUI version

---

##  Technologies Used

* **C Programming**
* Standard Libraries (`stdio.h`, `stdlib.h`)

---

##  Author

**Laila Tarek**

```


