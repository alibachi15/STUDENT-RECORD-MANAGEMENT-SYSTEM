# Student Record Management System in C

This is a menu-driven Student Record Management System developed using C programming. The main idea behind this project was to get practical experience with **Singly Linked Lists, pointers, dynamic memory allocation, and file handling**.

The program allows users to manage student details such as roll number, name, and percentage. It provides different options to add, delete, update, display, and sort student records.

## What can you do with this project?

- Add new student records with automatically generated roll numbers.
- Delete student records using roll number or name.
- Modify existing student details.
- Display all available student records.
- Sort records based on name or percentage.
- Reverse the linked list.
- Delete all records at once.
- Save student details in a file and load them automatically when the program starts.
- Validate percentage values to keep them within the range of 0–100.

## Concepts Used

While developing this project, I worked with the following C programming concepts:

- Structures and Pointers
- Singly Linked Lists
- Dynamic Memory Allocation (`malloc` and `free`)
- Functions and Modular Programming
- File Handling (`fopen`, `fscanf`, `fprintf`, `fclose`)
- Searching and Sorting

## Project Files

```text
Student-Record-Management/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_mod.c
├── stud_show.c
├── stud_save.c
└── makefile
```

## How to Run

**Clone the repository:**

```bash
git clone <your-repository-url>
```

**Navigate to the project folder:**

```bash
cd Student-Record-Management
```

**Compile the program:**

```bash
make
```

**Run the program:**

```bash
./a.out
```

## What I Learned

This project helped me understand how linked lists work in practical applications. I got hands-on experience with pointers, memory allocation, managing nodes, and storing data using file handling.

It was also a good opportunity to practice writing modular C programs by dividing different operations into separate source files.

---

**Developed by Muhammed Ali B**

*A C programming practice project focused on learning and implementing data structures and memory management.*
