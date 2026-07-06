# 🎟️ Ticket Booking System (C++)

A console-based Ticket Booking System developed in **C++**. This project allows users to manage movie shows through a menu-driven interface. It supports adding shows, booking and cancelling tickets, viewing booked seats, searching shows, and deleting shows. All show information is stored permanently using **file handling**, ensuring data is retained even after the application is closed.

---

## Features

- Add new movie shows
- View all available shows
- Search shows by Show ID
- Book movie tickets
- Cancel booked tickets
- View booked and available seats
- Delete movie shows
- Unique Show ID validation
- Automatic seat availability management
- Formatted table display using `iomanip`
- Automatic saving of show records to a text file
- Automatic loading of saved records when the program starts
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
- Loops
- Conditional Statements
- Input Validation (`cin.fail()`)

---

## Data Storage

The project stores all movie show information in a text file named:

```text
Showdata.txt
```

The file is automatically:

- Loaded when the program starts
- Updated after adding a new show
- Updated after booking tickets
- Updated after cancelling tickets
- Updated after deleting a show

This ensures that all movie show records and seat availability remain saved across multiple executions of the program.

---

## Seat Management

Each movie show stores:

- Total Seats
- Available Seats
- Booked Seats (calculated automatically)

The system automatically:

- Decreases available seats after ticket booking
- Increases available seats after ticket cancellation
- Prevents booking more tickets than available
- Prevents cancelling more tickets than booked

---

## How to Compile and Run

### Compile

```bash
g++ main.cpp -o ticket_booking
```

### Run

```bash
./ticket_booking
```

---

## Sample Output

```text
===== TICKET BOOKING SYSTEM =====

1. Add Show
2. View Shows
3. Search Show
4. Book Ticket
5. Cancel Ticket
6. View Booked Tickets
7. Delete Show
8. Exit

Choose an Option from the Menu : 1

ADDING NEW SHOW!

Enter Show Name : Avengers Endgame
Enter Show ID : 101
Enter Total Seats : 150

SHOW ADDED SUCCESSFULLY!
```

---

## Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Learning C++, Data Structures & Algorithms, and Software Development through hands-on projects.
