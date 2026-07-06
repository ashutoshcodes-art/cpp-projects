# 👨‍💼 Employee Management System

A menu-driven console application developed in **C++** to manage employee records. The application allows users to add new employees, view all employee details, search employees using their Employee ID, and delete employee records.

This project demonstrates the use of **structures**, **vectors**, **functions**, and **strings** to organize and manage employee information efficiently.

---

## ✨ Features

- ➕ Add new employee records
- 📋 View all employees
- 🔍 Search employee using Employee ID
- 🗑️ Delete employee records
- 🚫 Prevent duplicate Employee IDs
- 📊 Store multiple employee records using vectors
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Employee>`)
- Strings (`std::string`)
- Functions
- Loops
- Conditional Statements
- Linear Search
- Input Validation
- Menu-Driven Programming

---

## 📂 Employee Information Stored

Each employee record contains:

- 👤 Employee Name
- 🆔 Employee ID
- 🏢 Department
- 💰 Salary

---

## 📋 Menu Options

```text
1. Add Employee
2. View Employees
3. Search Employee
4. Delete Employee
5. Exit
```

---

## 🚀 How It Works

### Add Employee

The user enters:

- Employee Name
- Employee ID
- Department
- Salary

Before adding the record, the program checks whether the entered Employee ID already exists. If a duplicate ID is found, the employee is not added.

---

### View Employees

Displays all employee records including:

- Name
- Employee ID
- Department
- Salary

Each employee is displayed with a serial number for easy identification.

---

### Search Employee

Searches an employee using the Employee ID.

If the employee exists, all associated information is displayed.

Otherwise, the program displays an appropriate "Employee Not Found" message.

---

### Delete Employee

Displays the list of available employees and allows the user to delete a record by selecting its serial number.

The selected employee is removed from the vector.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate ID Verification
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Duplicate Employee ID checking
- Empty record verification
- Employee existence verification
- Valid serial number checking before deletion
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
g++ main.cpp -o employee-management
```

Run the executable:

```bash
./employee-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing multiple records using vectors
- Organizing related data with structures
- Performing duplicate record validation
- Implementing Linear Search
- Deleting records using vector operations
- Working with strings and numeric data together
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
