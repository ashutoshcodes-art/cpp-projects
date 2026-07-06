# 🏦 Bank Account Management System

A menu-driven console application developed in **C++** to simulate basic banking operations. The system allows users to create bank accounts, view account details, deposit money, withdraw money, transfer funds between accounts, and delete accounts while maintaining records using **file handling**.

This project demonstrates the use of **structures**, **vectors**, **functions**, **file handling**, **input validation**, and **transaction management** to build a persistent banking application.

---

## ✨ Features

- 🆕 Create new bank accounts
- 📋 View all account details
- 🔍 Search accounts using Account Number
- 💵 Deposit money
- 💸 Withdraw money
- 🔄 Transfer money between accounts
- 🗑️ Delete bank accounts
- 🚫 Prevent duplicate Account Numbers
- 💾 Automatically save account records
- 📂 Automatically load saved accounts
- ✅ Transaction validation
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Account>`)
- Functions
- File Handling (`ifstream` / `ofstream`)
- Input Validation
- Linear Search
- Dynamic Record Management
- Menu-Driven Programming

---

## 📂 Account Information Stored

Each account stores:

- 👤 Account Holder Name
- 🆔 Account Number
- 💰 Current Balance

---

## 💾 File Handling

This project uses **persistent storage** to maintain bank account records.

### Data File

```text
accounts.txt
```

### Automatic Operations

The application automatically:

- Loads all saved accounts when the program starts.
- Saves account information after:
  - Creating a new account
  - Depositing money
  - Withdrawing money
  - Transferring money
  - Deleting an account

This ensures that account records remain available even after the application is closed.

---

## 📋 Menu Options

```text
1. Create Account
2. View All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Transfer Money
7. Delete Account
8. Exit
```

---

## 🚀 How It Works

### Create Account

The user enters:

- Account Holder Name
- Account Number
- Initial Balance

Before creating the account, the program verifies that:

- The Account Number is unique.
- The Account Number is valid.
- The initial balance is non-negative.

The new account is then saved to the storage file.

---

### View All Accounts

Displays every stored account including:

- Account Holder Name
- Account Number
- Current Balance

---

### Search Account

Searches an account using its unique Account Number.

If found, complete account details are displayed.

Otherwise, an appropriate "Account Not Found" message is shown.

---

### Deposit Money

Allows depositing money into an existing account.

The program:

- Verifies the account exists.
- Validates the deposit amount.
- Updates the account balance.
- Saves the updated record automatically.

---

### Withdraw Money

Allows withdrawing money from an account.

Before processing the transaction, the program checks:

- Account existence
- Valid withdrawal amount
- Sufficient account balance

The balance is updated and saved automatically after a successful withdrawal.

---

### Transfer Money

Transfers money from one account to another.

The application verifies:

- Both accounts exist.
- Sender and receiver are different accounts.
- The sender has sufficient balance.

After validation:

- Sender balance is reduced.
- Receiver balance is increased.
- Both records are saved automatically.

---

### Delete Account

Allows deleting an account using its Account Number.

Before deletion, the program displays the account details and remaining balance.

The account is then permanently removed from both memory and the storage file.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Account Number Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Valid menu selection
- Integer input validation
- Unique Account Number validation
- Account existence verification
- Deposit amount validation
- Withdrawal amount validation
- Sufficient balance verification
- Same-account transfer prevention
- Empty account list verification

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
g++ main.cpp -o bank-management
```

Run the executable:

```bash
./bank-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing multiple records using vectors
- Organizing data using structures
- Implementing persistent storage with file handling
- Reading from and writing to text files
- Simulating real-world banking transactions
- Validating financial operations
- Preventing duplicate records
- Implementing fund transfer logic
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
