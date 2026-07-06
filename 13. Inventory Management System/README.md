# 📦 Inventory Management System

A menu-driven Inventory Management System developed in **C++** to manage products in a store. The application allows users to add, search, update, delete, restock, and sell products while maintaining inventory records using **file handling**, ensuring data is preserved between program executions.

---

## ✨ Features

- ➕ Add new products
- 📋 View all available products
- 🔍 Search products using Product ID
- ✏️ Update product details
- 🗑️ Delete products
- 📦 Restock existing products
- 🛒 Sell products
- 💰 Automatically generate bill during sale
- 🆔 Prevent duplicate Product IDs
- 💾 Automatically save inventory to a file
- 📂 Automatically load saved inventory when the program starts
- 📊 Display inventory in a formatted table

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Product>`)
- Functions
- Pass by Reference
- Input Validation
- Linear Search
- File Handling (`ifstream` / `ofstream`)
- Menu-Driven Programming
- Formatted Output using `iomanip`

---

## 📂 Data Stored

Each product stores the following information:

- Product Name
- Product ID
- Available Quantity
- Product Price

---

## 📁 File Handling

This project uses **persistent storage** to maintain inventory records.

### Data File

```
inventory.txt
```

### Automatic Operations

- Loads all saved products when the application starts.
- Saves updated inventory after:
  - Adding a product
  - Updating product details
  - Deleting a product
  - Restocking products
  - Selling products

This ensures inventory data is retained even after the application is closed.

---

## 📋 Menu Options

```
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

- Enter product name
- Assign a unique Product ID
- Specify quantity
- Enter price
- Product is stored in memory and saved to the file.

---

### View Products

Displays all products in a neatly formatted table including:

- Serial Number
- Product Name
- Product ID
- Quantity
- Price

---

### Search Product

Locate a product using its unique Product ID and display all its details.

---

### Update Product

Modify:

- Product Name
- Quantity
- Price

Changes are immediately written to the inventory file.

---

### Delete Product

Remove a product permanently from both memory and the storage file.

---

### Restock Product

Increase the quantity of an existing product without modifying other details.

---

### Sell Product

- Select a product using its ID.
- Enter the quantity to sell.
- Checks stock availability before processing.
- Deducts sold quantity from inventory.
- Calculates and displays the total bill.
- Saves the updated inventory automatically.

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

```bash
g++ main.cpp -o inventory
```

Run the program:

```bash
./inventory
```

---

## 📖 Learning Outcomes

While building this project, I practiced:

- Designing menu-driven applications
- Managing collections of records using vectors
- Structuring programs with reusable functions
- Implementing persistent storage with file handling
- Performing CRUD (Create, Read, Update, Delete) operations
- Validating user input
- Searching records efficiently
- Managing stock and inventory logic
- Formatting console output using tables

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, real-world console applications.
