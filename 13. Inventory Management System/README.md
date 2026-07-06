# 📦 Inventory Management System

A menu-driven console application developed in **C++** to manage product inventory for a store. The system allows users to add, view, search, update, delete, restock, and sell products while maintaining records using **file handling**, ensuring inventory data persists between program executions.

This project demonstrates the use of **structures**, **vectors**, **functions**, **file handling**, **formatted output**, and **inventory management logic** to build a persistent product management system.

---

## ✨ Features

- ➕ Add new products
- 📋 View all products
- 🔍 Search products using Product ID
- ✏️ Update product details
- 🗑️ Delete products
- 📦 Restock product quantity
- 🛒 Sell products
- 💰 Automatically calculate the total bill during sales
- 🚫 Prevent duplicate Product IDs
- 💾 Automatically save inventory records
- 📂 Automatically load inventory on startup
- 📊 Display products in a formatted table
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Product>`)
- Functions
- File Handling (`ifstream` / `ofstream`)
- Input Validation
- Linear Search
- Formatted Output (`iomanip`)
- Menu-Driven Programming

---

## 📂 Product Information Stored

Each product record contains:

- 📦 Product Name
- 🆔 Product ID
- 📊 Quantity
- 💰 Price

---

## 💾 File Handling

This project uses **persistent storage** to maintain inventory records.

### Data File

```text
inventory.txt
```

### Automatic Operations

The application automatically:

- Loads all saved products when the program starts.
- Saves inventory after:
  - Adding a product
  - Updating product details
  - Deleting a product
  - Restocking inventory
  - Selling products

This ensures that inventory information remains available even after closing the application.

---

## 📋 Menu Options

```text
1. Add Product
2. View Products
3. Search Product
4. Update Product
5. Delete Product
6. Restock Product
7. Sell Product
8. Exit
```

---

## 🚀 How It Works

### Add Product

Allows the user to enter:

- Product Name
- Product ID
- Quantity
- Price

Before adding the product, the program verifies that the Product ID is unique.

The record is then stored in memory and saved to the inventory file.

---

### View Products

Displays all stored products in a formatted table containing:

- Serial Number
- Product Name
- Product ID
- Available Quantity
- Price

---

### Search Product

Searches for a product using its unique Product ID.

If found, the product details are displayed.

Otherwise, an appropriate "Product Not Found" message is shown.

---

### Update Product

Allows modification of:

- Product Name
- Quantity
- Price

After updating, the modified record is automatically written to the inventory file.

---

### Delete Product

Removes the selected product from both memory and the inventory file.

---

### Restock Product

Allows increasing the available quantity of an existing product without changing its other details.

The updated inventory is automatically saved.

---

### Sell Product

Allows selling products by entering the desired quantity.

The program:

- Verifies that the product exists.
- Checks whether sufficient stock is available.
- Deducts the sold quantity from inventory.
- Calculates and displays the total bill.
- Saves the updated inventory automatically.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Product ID Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation

---

## ✅ Validation Implemented

The application performs:

- Valid menu selection
- Integer and floating-point input validation
- Duplicate Product ID checking
- Empty inventory verification
- Product existence verification
- Stock availability checking before selling

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
g++ main.cpp -o inventory-management
```

Run the executable:

```bash
./inventory-management
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing records using vectors
- Organizing data using structures
- Implementing persistent storage with file handling
- Reading from and writing to text files
- Managing inventory and stock updates
- Calculating bills based on quantity and price
- Preventing duplicate records
- Formatting console output using tables
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
