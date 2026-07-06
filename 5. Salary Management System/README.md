# 💰 Salary Management System

A menu-driven console application developed in **C++** to manage employee records and update employee salaries. The system allows users to add employees, view all employee details, search employees using their Employee ID, update salaries, and delete employee records.

This project demonstrates the use of **structures**, **vectors**, **functions**, and **strings** while implementing a simple employee salary management workflow.

---

## ✨ Features

- ➕ Add new employee records
- 📋 View all employees
- 🔍 Search employee using Employee ID
- 💰 Update employee salary
- 🗑️ Delete employee records
- 🚫 Prevent duplicate Employee IDs
- 📊 Store employee records using vectors
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
4. Update Salary
5. Delete Employee
6. Exit
```

---

## 🚀 How It Works

### Add Employee

Allows the user to enter:

- Employee Name
- Employee ID
- Department
- Salary

Before storing the record, the program verifies that the Employee ID is unique.

---

### View Employees

Displays every employee currently stored in the system along with:

- Name
- Employee ID
- Department
- Salary

---

### Search Employee

Searches an employee using the Employee ID.

If found, the complete employee details are displayed.

Otherwise, an appropriate message is shown.

---

### Update Salary

Allows the user to search an employee using their Employee ID and update only the salary while keeping all other employee details unchanged.

The updated salary is displayed immediately after modification.

---

### Delete Employee

Displays all employees and allows the user to remove a selected employee using the serial number.

The record is permanently removed from the vector.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Employee ID Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Duplicate Employee ID checking
- Empty record verification
- Employee existence verification
- Valid serial number validation before deletion
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
g++ main.cpp -o salary-management
```

Run the executable:

```bash
./salary-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing employee records using vectors
- Organizing related information using structures
- Updating specific fields within stored records
- Implementing Linear Search
- Preventing duplicate Employee IDs
- Working with strings and numeric data together
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
