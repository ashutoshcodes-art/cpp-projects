# 🎟️ Ticket Booking System

A menu-driven console application developed in **C++** to simulate a movie ticket booking system. The application allows users to add movie shows, view available shows, search shows, book tickets, cancel bookings, view booking statistics, and delete shows while maintaining records using **file handling**.

This project demonstrates the use of **structures**, **vectors**, **functions**, **file handling**, **formatted output**, and **seat management logic** to build a persistent ticket booking application.

---

## ✨ Features

- 🎬 Add new movie shows
- 📋 View all available shows
- 🔍 Search shows using Show ID
- 🎟️ Book movie tickets
- ❌ Cancel booked tickets
- 📊 View booked ticket statistics
- 🗑️ Delete movie shows
- 🚫 Prevent duplicate Show IDs
- 💺 Automatic seat availability management
- 💾 Automatically save show records
- 📂 Automatically load saved shows
- 📊 Display shows in a formatted table
- 📋 Menu-driven interface

---

## 🛠 Concepts Used

- Structures (`struct`)
- Vectors (`vector<Show>`)
- Functions
- File Handling (`ifstream` / `ofstream`)
- Input Validation
- Linear Search
- Formatted Output (`iomanip`)
- Menu-Driven Programming

---

## 📂 Show Information Stored

Each movie show stores:

- 🎬 Movie Name
- 🆔 Show ID
- 💺 Available Seats
- 🎟️ Total Seats

The program also calculates the number of booked seats dynamically.

---

## 💾 File Handling

This project uses **persistent storage** to maintain show information.

### Data File

```text
Showdata.txt
```

### Automatic Operations

The application automatically:

- Loads all saved shows when the program starts.
- Saves show data after:
  - Adding a show
  - Booking tickets
  - Cancelling tickets
  - Deleting a show

This ensures that all booking information remains available between program executions.

---

## 📋 Menu Options

```text
1. Add Show
2. View Shows
3. Search Show
4. Book Ticket
5. Cancel Ticket
6. View Booked Tickets
7. Delete Show
8. Exit
```

---

## 🚀 How It Works

### Add Show

Allows the user to enter:

- Movie Name
- Show ID
- Total Number of Seats

The application verifies that the Show ID is unique before creating the show.

Initially, all seats are marked as available.

---

### View Shows

Displays all available movie shows in a formatted table including:

- Movie Name
- Show ID
- Booked Seats
- Available Seats
- Total Seats

---

### Search Show

Searches for a show using its unique Show ID.

If found, complete show details are displayed.

Otherwise, an appropriate "Show Not Found" message is shown.

---

### Book Ticket

Allows booking one or more tickets for a selected show.

The program verifies:

- The show exists.
- Seats are available.
- Requested tickets do not exceed the available seats.

After successful booking:

- Available seats decrease.
- Booked seats increase automatically.
- Updated data is saved.

---

### Cancel Ticket

Allows users to cancel previously booked tickets.

Before cancellation, the application verifies:

- The show exists.
- Tickets have actually been booked.
- Cancellation quantity is valid.

After cancellation:

- Available seats increase.
- Booked seats decrease automatically.
- Updated information is saved.

---

### View Booked Tickets

Displays all movie shows along with:

- Booked Seats
- Available Seats
- Total Capacity

This provides a quick overview of booking status for every show.

---

### Delete Show

Removes a movie show permanently using its Show ID.

The record is deleted from both memory and the storage file.

---

## ⚙️ Algorithms Used

- Linear Search
- Duplicate Show ID Validation
- Dynamic Record Storage using Vectors
- Vector Erase Operation
- Seat Availability Calculation

---

## ✅ Validation Implemented

The application performs:

- Valid menu selection
- Integer input validation
- Unique Show ID verification
- Show existence verification
- Seat availability validation
- Booking limit validation
- Cancellation limit validation
- Empty show list verification

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
g++ main.cpp -o ticket-booking
```

Run the executable:

```bash
./ticket-booking
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Managing multiple records using vectors
- Organizing data with structures
- Implementing persistent storage using file handling
- Reading from and writing to text files
- Managing seat availability dynamically
- Implementing booking and cancellation workflows
- Validating user input and booking constraints
- Formatting console output using tables
- Designing modular, menu-driven applications

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
