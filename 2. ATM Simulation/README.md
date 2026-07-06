# 🏧 ATM Simulation System

A console-based ATM Simulation System developed in **C++** that mimics the basic functionality of an Automated Teller Machine. The application allows users to check their account balance, deposit money, withdraw money, and exit the session through a simple menu-driven interface.

This project focuses on implementing core programming concepts such as functions, parameter passing, input validation, and menu-driven program design.

---

## ✨ Features

- 💰 Check current account balance
- ➕ Deposit money into the account
- ➖ Withdraw money from the account
- 🚫 Prevent withdrawal beyond available balance
- ✅ Validate deposit and withdrawal limits
- 📋 Simple menu-driven interface

---

## 🛠 Concepts Used

- Functions
- Conditional Statements
- Loops
- Pass by Reference
- Pass by Constant Reference
- Variables
- Console Input & Output

---

## 📋 Menu Options

```text
===== ATM =====

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
```

---

## 🚀 How It Works

### Check Balance

Displays the current balance available in the account.

---

### Deposit Money

- Enter the amount to deposit.
- Deposit is accepted only if it lies between **₹1 and ₹100000**.
- The account balance is updated immediately after a successful deposit.

---

### Withdraw Money

- Enter the withdrawal amount.
- The program checks whether sufficient balance is available.
- If enough balance exists, the amount is deducted.
- Otherwise, an **Insufficient Balance** message is displayed.

---

### Exit

Terminates the ATM session safely.

---

## ⚙️ Validation Implemented

The application performs the following validations:

- Menu option validation
- Deposit amount validation
- Withdrawal amount validation
- Insufficient balance checking
- Maximum transaction limit checking

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
g++ main.cpp -o atm
```

Run the executable:

```bash
./atm
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Designing menu-driven applications
- Breaking a program into reusable functions
- Passing variables using references
- Managing program flow with loops and conditionals
- Performing basic transaction validation
- Simulating a real-world ATM workflow

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
