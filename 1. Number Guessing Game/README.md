# 🎯 Number Guessing Game

A simple console-based **Number Guessing Game** developed in **C++** where the computer randomly generates a number between **1 and 100**, and the player has to guess it with the help of hints.

After every incorrect guess, the game tells the player whether the correct number is **higher** or **lower**, making the gameplay interactive and enjoyable.

This project was built while learning the fundamentals of C++ and demonstrates the use of functions, loops, conditional statements, and random number generation.

---

## ✨ Features

- 🎲 Random number generation (1–100)
- 💡 Hint system
  - **Little Higher!**
  - **Little Lower!**
- 🔢 Counts the number of attempts
- 🔄 Play Again option
- 📌 Modular program using functions
- 🖥️ Simple console interface

---

## 🛠️ Technologies Used

- **Language:** C++
- **Compiler:** g++
- **IDE:** Visual Studio Code

---

## 🚀 How to Run

### Compile

```bash
g++ main.cpp -o game
```

### Run

```bash
./game
```

---

## 🎮 Gameplay

1. The computer generates a random number between **1 and 100**.
2. Enter your guess.
3. The game provides hints:
   - 📉 **Little Higher!**
   - 📈 **Little Lower!**
4. Continue guessing until you find the correct number.
5. The program displays the total number of attempts.
6. Choose whether to play another round.

---

## 💻 Sample Output

```
I've Thought the Number between 1 to 100

Guess Number : 40
Little Higher!

Guess Number : 75
Little Lower!

Guess Number : 63
Correct!
You Guessed it in 3 attempts

You want to Play again [Y/N] :
```

---

## 📚 Concepts Covered

This project demonstrates the following C++ concepts:

- Functions
- Function Declarations
- Function Calls
- Loops (`while`)
- Conditional Statements (`if-else`)
- Boolean Variables
- Random Number Generation (`rand()`, `srand()`)
- Time-based Seeding (`time(0)`)
- Character Handling (`tolower()`)
- User Interaction

---

## 📖 What I Learned

While building this project, I learned:

- How pseudo-random numbers are generated in C++
- Why `srand(time(0))` is required
- Breaking a program into reusable functions
- Designing simple game logic
- Using loops until a condition is satisfied
- Handling user choices for replaying the game

---

## 🔮 Future Improvements

Some features I plan to add in future versions:

- Difficulty Levels (Easy, Medium, Hard)
- Limited Attempts Mode
- Score System
- Best Score Record
- Input Validation
- Colorful Console Output
- Timer-based Challenge

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Learning C++, Data Structures & Algorithms, and Software Development.

---

## ⭐ If you like this project

If you found this project interesting, consider giving the repository a **⭐ Star**.
