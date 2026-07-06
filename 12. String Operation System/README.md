# 🔤 String Operations System

A menu-driven console application developed in **C++** to perform various string manipulation operations. The program allows users to enter a string and perform common operations such as finding its length, copying, concatenating, comparing, reversing, palindrome checking, counting vowels and consonants, changing letter case, searching characters, and replacing characters.

This project focuses on strengthening string manipulation techniques using built-in C++ string functions and modular programming.

---

## ✨ Features

- 📝 Enter a string
- 📋 Display the current string
- 📏 Find string length
- 📄 Copy a string
- ➕ Concatenate two strings
- ⚖️ Compare two strings
- 🔄 Reverse the string
- 🔁 Check whether the string is a palindrome
- 🔤 Count vowels and consonants
- 🔠 Convert to uppercase
- 🔡 Convert to lowercase
- 🔍 Search a character
- ✏️ Replace a character
- ✅ Menu-driven interface

---

## 🛠 Concepts Used

- Strings (`std::string`)
- Functions
- Loops
- Conditional Statements
- Character Handling (`cctype`)
- String Library Functions
- Input Validation
- Menu-Driven Programming

---

## 📋 Menu Options

```text
1. Enter String
2. Display
3. Length
4. Copy
5. Concatenate
6. Compare
7. Reverse
8. Palindrome
9. Count Vowels & Consonants
10. Uppercase
11. Lowercase
12. Search Character
13. Replace Character
14. Exit
```

---

## 🚀 How It Works

### Enter String

Accepts a complete string from the user using `getline()`.

---

### Display String

Displays the currently stored string.

---

### Length

Calculates and displays the total number of characters using the `length()` function.

---

### Copy String

Creates a duplicate of the current string and displays the copied version.

---

### Concatenate

Accepts another string from the user and appends it to the existing string.

---

### Compare Strings

Compares two strings lexicographically and indicates whether they are equal, smaller, or greater.

---

### Reverse String

Creates a reversed copy of the string using the STL `reverse()` function.

---

### Palindrome Check

Reverses the string and compares it with the original to determine whether it is a palindrome.

---

### Count Vowels & Consonants

Traverses each character of the string and counts:

- Total vowels
- Total consonants

Only alphabetic characters are considered.

---

### Uppercase Conversion

Converts every alphabetic character to uppercase using `toupper()`.

---

### Lowercase Conversion

Converts every alphabetic character to lowercase using `tolower()`.

---

### Search Character

Searches for a specific character in the string and displays all matching indices.

---

### Replace Character

Replaces every occurrence of a selected character with another character entered by the user.

---

## ✅ Validation Implemented

The program validates:

- Valid menu options
- Integer menu input
- Proper string input using `getline()`
- Character-based operations for searching and replacing

---

## ⚙️ String Functions & Algorithms Used

- `getline()`
- `length()`
- `reverse()`
- `toupper()`
- `tolower()`
- `isalpha()`
- Character traversal using loops
- Lexicographical string comparison

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
g++ main.cpp -o string-system
```

Run the executable:

```bash
./string-system
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Working with C++ strings
- Implementing common string manipulation algorithms
- Using built-in string member functions
- Performing character-level operations
- Handling user input with `getline()`
- Designing modular programs using functions
- Building menu-driven console applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
