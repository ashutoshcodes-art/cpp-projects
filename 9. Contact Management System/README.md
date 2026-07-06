# 📞 Contact Management System

A menu-driven console application developed in **C++** to manage personal contacts. The system allows users to add, view, search, update, and delete contacts while maintaining records using **file handling**, ensuring that all contacts remain available even after the application is closed.

This project demonstrates the use of **structures**, **vectors**, **functions**, **strings**, **file handling**, and **input validation** to build a persistent contact management application.

---

## ✨ Features

- ➕ Add new contacts
- 📋 View all contacts
- 🔍 Search contacts using Phone Number
- ✏️ Update contact details
- 🗑️ Delete contacts
- 📱 Validate 10-digit phone numbers
- 🚫 Prevent duplicate phone numbers
- 💾 Automatically save contacts
- 📂 Automatically load contacts at startup
- 📊 Display contacts in a formatted table
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Contact>`)
- Strings (`std::string`)
- Functions
- File Handling (`ifstream` / `ofstream`)
- Input Validation
- Linear Search
- Formatted Output (`iomanip`)
- Menu-Driven Programming

---

## 📂 Contact Information Stored

Each contact contains:

- 👤 Contact Name
- 📱 Phone Number

---

## 💾 File Handling

This project uses **persistent storage** to maintain contact records.

### Data File

```text
contacts.txt
```

### Automatic Operations

The application automatically:

- Loads all contacts when the program starts.
- Saves contacts after:
  - Adding a contact
  - Updating a contact
  - Deleting a contact

This ensures that all contact information is preserved between program executions.

---

## 📋 Menu Options

```text
1. Add Contact
2. View All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
```

---

## 🚀 How It Works

### Add Contact

The user enters:

- Contact Name
- Phone Number

Before adding the contact, the program validates that:

- The phone number contains exactly **10 digits**.
- The phone number does not already exist.

After successful validation, the contact is stored and automatically saved to the file.

---

### View Contacts

Displays all stored contacts in a formatted table containing:

- Serial Number
- Contact Name
- Phone Number

---

### Search Contact

Searches for a contact using its **Phone Number**.

If the contact exists, its details are displayed in a formatted table.

Otherwise, the program displays an appropriate "Contact Not Found" message.

---

### Update Contact

Allows updating either:

- Contact Name
- Phone Number

When updating the phone number, the application again validates:

- 10-digit format
- Duplicate phone number prevention

The updated contact is immediately saved to the file.

---

### Delete Contact

Searches for a contact using the phone number and permanently removes it from both memory and the storage file.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Phone Number Validation
- Phone Number Format Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Valid menu selection
- Integer input validation
- 10-digit phone number validation
- Duplicate phone number checking
- Empty contact list verification
- Contact existence verification before update and deletion

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
g++ main.cpp -o contact-management
```

Run the executable:

```bash
./contact-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing records using vectors
- Organizing data with structures
- Implementing persistent storage using file handling
- Reading from and writing to text files
- Validating user input
- Preventing duplicate records
- Formatting console output using tables
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
