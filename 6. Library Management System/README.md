# 📚 Library Management System

A menu-driven console application developed in **C++** to manage a small library. The system allows users to add books, search for books, issue books, return books, delete books, and view the complete library collection while tracking the availability status of each book.

This project demonstrates the use of **structures**, **vectors**, **functions**, and **strings** to implement a simple library management workflow.

---

## ✨ Features

- ➕ Add new books
- 📖 View all books
- 🔍 Search books using Book ID
- 📕 Issue books
- 📗 Return issued books
- 🗑️ Delete books
- 🚫 Prevent duplicate Book IDs
- 📚 Track book availability
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Book>`)
- Strings (`std::string`)
- Functions
- Loops
- Conditional Statements
- Linear Search
- Input Validation
- Menu-Driven Programming

---

## 📂 Book Information Stored

Each book record contains:

- 📖 Book Title
- 🆔 Book ID
- ✍️ Author Name
- 📚 Availability Status

---

## 📋 Menu Options

```text
1. Add Book
2. View Books
3. Search Book
4. Issue Book
5. Return Book
6. Delete Book
7. Exit
```

---

## 🚀 How It Works

### Add Book

Allows the user to enter:

- Book Title
- Book ID
- Author Name

The program verifies that the entered Book ID is unique before adding the book. Newly added books are marked as **Available** by default.

---

### View Books

Displays every book stored in the library along with:

- Book Title
- Book ID
- Author Name
- Current Status (Available / Issued)

---

### Search Book

Searches for a book using its unique Book ID.

If the book exists, all its details are displayed.

Otherwise, the program displays an appropriate "Book Not Found" message.

---

### Issue Book

Allows the user to issue an available book.

The program:

- Searches using Book ID
- Checks whether the book exists
- Verifies that it has not already been issued
- Updates the status from **Available** to **Issued**

---

### Return Book

Displays all currently issued books and allows the user to return a selected book.

The program changes the book status from **Issued** back to **Available**.

---

### Delete Book

Allows the user to permanently remove a book from the library using its Book ID.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Book ID Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation
- Status Tracking using Boolean Variables

---

## ✅ Validation Implemented

The application performs:

- Duplicate Book ID checking
- Empty library verification
- Book existence verification
- Issue only available books
- Prevent issuing already issued books
- Prevent returning already available books
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
g++ main.cpp -o library-management
```

Run the executable:

```bash
./library-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing multiple records using vectors
- Organizing data with structures
- Tracking object state using Boolean values
- Implementing a simple issue/return workflow
- Performing Linear Search
- Preventing duplicate records
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
