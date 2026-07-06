# 🎯 Number Guessing Game

A simple console-based C++ game where the player tries to guess a randomly generated number between **1 and 100**. The game provides hints after each incorrect guess and tracks the total number of attempts required to find the correct number. Players can also choose to replay the game multiple times without restarting the program.

---

## ✨ Features

- 🎲 Random number generation between 1 and 100
- 💡 Higher/Lower hints after every incorrect guess
- 📊 Counts the number of attempts taken
- 🔁 Replay option without restarting the application
- 🖥️ Simple console-based interface

---

## 🛠 Concepts Used

- Functions
- Loops
- Conditional Statements
- Random Number Generation (`rand()`)
- Time-based Random Seed (`srand(time(0))`)
- Character Handling (`tolower()`)

---

## 🚀 How It Works

### Generate Random Number

The program generates a random secret number between **1 and 100** using:

```cpp
rand() % 100 + 1
```

---

### Guess the Number

The player repeatedly enters guesses.

The program responds with:

- **Correct!** if the guess matches
- **Little Higher!** if the guess is too small
- **Little Lower!** if the guess is too large

The loop continues until the correct number is guessed.

---

### Attempt Counter

Every guess increases the attempt counter.

Once the correct answer is found, the program displays the total number of attempts taken.

---

### Replay Option

After each game, the player can choose:

- **Y** → Play another round
- **N** → Exit the game

Input is accepted in both uppercase and lowercase.

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
g++ main.cpp -o guessing-game
```

Run the executable:

```bash
./guessing-game
```

---

## 📚 Learning Outcomes

While building this project, I practiced:

- Designing programs using functions
- Generating random numbers
- Using loops for repeated gameplay
- Tracking program state with variables
- Validating user interaction
- Building an interactive console application

---

## 👨‍💻 Author

**Ashutosh**

B.Tech Computer Science & Information Technology (CS-IT)

Built as part of my C++ learning journey to strengthen programming fundamentals through practical, console-based projects.
