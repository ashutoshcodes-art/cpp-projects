# 🎓 Student Record Management System

A menu-driven console application developed in **C++** to manage student records. The system allows users to add new students, view all stored records, search for a student using their roll number, and delete student records.

This project demonstrates the use of **structures**, **vectors**, **functions**, and **strings** to organize and manage multiple student records efficiently.

---

## ✨ Features

- ➕ Add new student records
- 📋 View all students
- 🔍 Search student using Roll Number
- 🗑️ Delete student records
- 📊 Store multiple students using vectors
- 📋 Simple menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Student>`)
- Strings (`std::string`)
- Functions
- Loops
- Conditional Statements
- Linear Search
- Input Validation using `getline()`
- Menu-Driven Programming

---

## 📂 Student Information Stored

Each student record contains:

- 👤 Student Name
- 🆔 Roll Number
- 📈 CGPA

---

## 📋 Menu Options

```text
1. Add Student
2. View Students
3. Search Student
4. Delete Student
5. Exit
```

---

## 🚀 How It Works

### Add Student

Allows the user to enter:

- Student Name
- Roll Number
- CGPA

The new record is stored in a vector.

---

### View Students

Displays every stored student along with:

- Name
- Roll Number
- CGPA

Each student is displayed with a serial number for easy identification.

---

### Search Student

Searches for a student using their **Roll Number**.

If found, the complete student details are displayed.

Otherwise, the program displays an appropriate "Student Not Found" message.

---

### Delete Student

Displays all available students and allows the user to delete a student by selecting the corresponding serial number.

The selected student record is removed from the vector.

---

## ⚙️ Algorithms Used

- Linear Search
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Empty record checks
- Student existence verification before searching
- Valid serial number verification before deletion
- Proper string input using `getline()`

---

## ⚙️ Requirements

- C++11 or later
- Any standard C++ compiler
  - g++
  - MinGW
  - MSVC
  - Clang

---

## ▶️ Compilation

Compile the program:

```bash
g++ main.cpp -o student-management
```

Run the executable:

```bash
./student-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing multiple records using vectors
- Organizing data with structures
- Working with strings and numeric data together
- Implementing Linear Search
- Deleting records using vector operations
- Building menu-driven applications
- Writing modular and reusable functions

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
