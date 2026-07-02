# STUDENT-RECORD-MANAGEMENT-SYSTEM# Student Record Management System (C)

A menu-driven **Student Record Management System** developed in **C** using a **Singly Linked List** and **File Handling**. This project demonstrates CRUD operations, sorting, searching, and persistent storage of student records.

---

## Features

- Add a new student record
- Delete a student record
  - By Roll Number
  - By Student Name
- Show all student records
- Modify student details
  - Search by Roll Number
  - Search by Name
  - Search by Percentage
- Sort student records
  - By Roll Number
  - By Name
  - By Percentage
- Save records to file
- Load records from file automatically at startup
- Exit with or without saving

---

## Data Structure Used

- Singly Linked List

Each node contains:

```c
struct st
{
    int roll;
    char name[20];
    float mark;
    struct st *next;
};
```

---

## Project Structure

```
.
├── mini_project.c      // Main Menu
├── student.h           // Structure & Function Prototypes
├── stud_add.c          // Add Student
├── stud_del.c          // Delete Student
├── stud_show.c         // Display Records
├── stud_mod.c          // Modify Records
├── stud_sort.c         // Sorting Module
├── stud_save.c         // Save Records to File
├── load.c              // Load Records from File
└── student.dat         // Database File
```

---

## Functionalities

### Add Student

- Finds the smallest available Roll Number.
- Inserts the record into the linked list.
- Prevents duplicate Roll Numbers.

---

### Delete Student

Delete using

- Roll Number
- Student Name

If multiple students have the same name, all matching records are displayed and the user is asked to enter the Roll Number of the student to delete.

---

### Show Student Records

Displays all records in a formatted table.

Example:

```
--------------------------------------------
Roll No     Name             Percentage
--------------------------------------------
1           Arun             91.50
2           Ravi             86.00
3           Mani             95.25
--------------------------------------------
```

---

### Modify Student

Records can be searched using

- Roll Number
- Name
- Percentage

If multiple matching records exist (same name or same percentage), all matching records are displayed and the user selects the desired record using the Roll Number.

Fields that can be modified:

- Name
- Percentage

---

### Sort Records

Supports sorting using Bubble Sort.

Options:

- Roll Number
- Name
- Percentage

Sorting is performed by rearranging the linked-list nodes.

---

### Save Records

Stores all linked-list records into

```
Student_record.txt
```

using file handling.

---

### Load Records

At program startup all records are loaded automatically from

```
Student_record.txt
```

into the linked list.

---

## Technologies Used

- C Programming
- Singly Linked List
- File Handling
- Dynamic Memory Allocation
- Bubble Sort
- GCC Compiler

---

## Compilation

Compile the project using GCC.

```bash
gcc *.c -o student
```

or

```bash
gcc *.c -Wall -Wextra -o student
```

---

## Run

Linux

```bash
./student
```

Windows

```bash
student.exe
```

---

## Sample Menu

```
******** STUDENT RECORD MENU ********

A/a : Add New Record
D/d : Delete Record
S/s : Show Records
M/m : Modify Record
T/t : Sort Records
V/v : Save Records
E/e : Exit

Enter Your Choice :
```

---

## Algorithms Used

- Singly Linked List
- Bubble Sort
- Sequential Search
- File Handling
- Dynamic Memory Allocation

---

## Learning Outcomes

This project helped in understanding

- Linked List Operations
- Dynamic Memory Allocation
- Pointer Manipulation
- File Handling in C
- Searching Techniques
- Bubble Sorting
- Menu Driven Programs
- Modular Programming
- Header Files
- Software Design using Multiple Source Files

---

## License

This project is created for educational and learning purposes.
