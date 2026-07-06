# 🏦 Bank Account Management System (C++)

A console-based Bank Account Management System developed in **C++**. This project provides a menu-driven interface to perform common banking operations such as creating accounts, depositing money, withdrawing funds, transferring money between accounts, and deleting accounts. All account records are stored permanently using **file handling**, ensuring data is retained even after the program is closed.

---

## Features

- Create new bank accounts
- View all accounts
- Search accounts by Account Number
- Deposit money
- Withdraw money
- Transfer money between accounts
- Delete accounts
- Unique Account Number validation
- **Automatic saving of account records to a text file**
- **Automatic loading of saved account records when the program starts**
- Persistent data storage using file handling
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
- Dynamic Data Storage
- Linear Search
- Loops
- Conditional Statements
- Input Validation (`cin.fail()`)

---

## Data Storage

The project stores all account information in a text file named:

```text
accounts.txt
```

The file is automatically:

- Read when the program starts
- Updated after creating an account
- Updated after deposits
- Updated after withdrawals
- Updated after money transfers
- Updated after deleting an account

This ensures account information remains available across multiple program executions.

---

## How to Compile and Run

### Compile

```bash
g++ main.cpp -o bank_management
```

### Run

```bash
./bank_management
```

---

## Sample Output

```text
===== BANK ACCOUNT MANAGEMENT SYSTEM =====

1. Create Account
2. View All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Transfer Money
7. Delete Account
8. Exit

Choose an Option from the Menu : 1

CREATING NEW ACCOUNT!

Enter Account Holder's First Name : Ashutosh
Enter Account Number : 1001
Enter Deposited Balance : 5000

ACCOUNT CREATED SUCCESSFULLY!
```

---

## Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Learning C++, Data Structures & Algorithms, and Software Development through hands-on projects.
