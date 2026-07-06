# 📞 Contact Management System (C++)

A console-based Contact Management System developed in **C++**. This project allows users to manage personal contacts through a menu-driven interface. It supports adding, viewing, searching, updating, and deleting contacts while storing records permanently using **file handling**. The system also validates phone numbers and ensures every contact has a unique mobile number.

---

## Features

- Add new contacts
- View all saved contacts
- Search contacts using Phone Number
- Update contact name or phone number
- Delete contacts
- Unique phone number validation
- 10-digit phone number validation
- Formatted contact display using tables
- Automatic saving of contacts to a text file
- Automatic loading of saved contacts on program startup
- Menu-driven interface
- Input validation for numeric values

---

## Concepts Used

- Structures (`struct`)
- Vectors (`std::vector`)
- Functions
- Strings (`std::string`)
- File Handling (`ifstream`, `ofstream`)
- Reading and Writing Text Files
- Formatted Output (`iomanip`)
- Dynamic Data Storage
- Linear Search
- Input Validation (`cin.fail()`)
- String Validation (`isdigit()`)

---

## Data Storage

The project stores all contact information in a text file named:

```text
contacts.txt
```

The file is automatically:

- Loaded when the program starts
- Updated after adding a contact
- Updated after updating a contact
- Updated after deleting a contact

This ensures that all contacts remain saved even after closing the application.

---

## Phone Number Validation

The system validates every phone number before saving it.

Validation rules:

- Must contain exactly **10 digits**
- Only numeric characters are allowed
- Duplicate phone numbers are not permitted

This helps maintain accurate and unique contact records.

---

## How to Compile and Run

### Compile

```bash
g++ main.cpp -o contact_management
```

### Run

```bash
./contact_management
```

---

## Sample Output

```text
===== CONTACT MANAGEMENT =====

1. Add Contact
2. View All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit

Choose an Option from the Menu : 1

ADDING NEW CONTACT!

Enter Name : Ashutosh
Enter Phone No. : 9876543210

CONTACT ADDED SUCCESSFULLY!
```

---

## Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Learning C++, Data Structures & Algorithms, and Software Development through hands-on projects.
