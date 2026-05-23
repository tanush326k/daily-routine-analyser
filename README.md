<p align="center"> <img src="banner.svg" alt="DAILY ROUTINE ANALYSER"> </p> <p align="center"> <b>Track • Reflect • Improve Your 24 Hours</b><br> A revived hackathon project powered by C + GitHub Copilot </p>

A simple but insightful C-based CLI tool that helps users reflect on their daily routine by analyzing how they distribute their 24 hours across study, sleep, exercise, and leisure.
Originally built during a hackathon under time pressure, this project has now been **revived, refactored, and improved with GitHub Copilot assistance** to make it cleaner, more modular, and easier to extend.

---

## 🚀 Features

- ⏰ Accepts daily time breakdown (study, sleep, exercise, leisure)
- ✔️ Validates total hours (must not exceed 24)
- 📊 Calculates a daily productivity score (/10)
- 💡 Provides simple behavioral insights
- 🎨 Colored terminal UI for better readability
- 🧩 Modular structure (refactored from monolithic code)
- 🤖 Copilot-assisted improvements and refactoring

---
🚀 Overview
A C-based CLI productivity analyzer that helps users reflect on how they spend their 24 hours across:
📚 Study
😴 Sleep
🏃 Exercise
🎮 Leisure
It validates time input, computes a productivity score, and provides simple behavioral insights to encourage better daily balance.
Originally built during a hackathon under time pressure and later revived, refactored, and improved using GitHub Copilot.

✨ Features

⏱️ Validates total daily hours (max 24)
📊 Calculates productivity score (/10)
💡 Provides personalized habit insights
🎨 Colorful CLI interface (ANSI styling)
🧠 Balanced scoring logic based on lifestyle habits
🤖 Refactored using GitHub Copilot suggestions

## 🧠 How It Works

The program:
1. Takes user input for daily activities
2. Ensures total hours ≤ 24
3. Computes percentage distribution of time
4. Generates a score based on healthy habits:
   - Study ≥ 6 hours → bonus
   - Sleep between 6–9 hours → optimal
   - Exercise ≥ 1 hour → healthy habit
   - Leisure balance considered
5. Displays insights + final score

---

## 🛠️ Tech Stack

- Language: **C**
- Concepts: Arrays, structs, functions, loops, validation
- CLI-based UI with ANSI color formatting

---

## 📈 Before vs After (Revival Journey)

### 🔴 Original Hackathon Version
- Everything written inside `main()`
- No modular structure
- No data abstraction
- Limited scalability
- Basic scoring logic

### 🟢 Revived Version (with Copilot)
- Modular functions (`getScore`, `printSummary`)
- Structured data using `struct`
- Cleaner and readable logic
- Easier to extend and maintain
- Improved UX and flow

---

## 🤖 How GitHub Copilot Helped

- Suggested breaking `main()` into reusable functions
- Helped design `struct Day` for cleaner data handling
- Assisted in refactoring scoring logic
- Improved readability and reduced nested loops
- Suggested modular program architecture

---

## 📂 Project Structure

```

daily-routine-analyser/
│
├── main.c        # Core application (refactored version)
├── README.md     # Project documentation

````

---

## ▶️ How to Run

### Compile
```bash
gcc main.c -o routine -lm
````

### Run

```bash
./routine
```

---

## 💡 Future Improvements

* Save daily logs to CSV file
* Add weekly progress tracking
* Graph-based visualization
* Habit streak system
* GUI version (Python/Qt or web dashboard)

---

## 🏁 Inspiration

This project was originally built during a hackathon in a rushed environment and later revived to demonstrate:

> “How small, unfinished ideas can evolve into structured, meaningful tools with the help of AI-assisted development.”

---

## 👨‍💻 Author

Built as a revived hackathon project showcasing:

* C programming fundamentals
* Refactoring with GitHub Copilot
* Practical habit tracking logic

````

---

# 📝 Submission Story (for form / report)

```md
## Submission Story

During a hackathon, I built a simple CLI-based “Daily Routine Analyser” in C under tight time constraints. The goal was to help users reflect on how they spend their 24 hours across study, sleep, exercise, and leisure.

At the time, the project was functional but unstructured — all logic was written inside a single `main()` function due to time pressure. It worked, but it was difficult to maintain, extend, or reuse.

After revisiting the project, I decided to “revive” it and improve its design using GitHub Copilot as a coding assistant.

### What I Improved
- Refactored monolithic code into modular functions
- Introduced structured data using `struct`
- Improved scoring logic clarity and readability
- Enhanced user experience with cleaner output formatting
- Organized code for scalability and future enhancements

### Role of GitHub Copilot
GitHub Copilot helped significantly in:
- Suggesting function decomposition from a large `main()`
- Generating cleaner implementations for scoring logic
- Recommending struct-based data organization
- Reducing nested loops and improving readability
- Speeding up refactoring and cleanup of legacy code

### Outcome
The final version is a cleaner, modular, and more maintainable CLI tool that better demonstrates software design principles compared to the original hackathon submission.

This revival shows how even a small unfinished project can be transformed into a structured and extensible application with the help of AI-assisted development tools.
````

---

# 🤖 Copilot Prompt Log 

```md
## GitHub Copilot Prompt Log

Below are example prompts used during project revival:

1.
"Refactor this C program by splitting main() into separate functions for input, scoring, and output."

2.
"Create a struct in C to store daily routine data like study, sleep, exercise, and leisure hours."

3.
"Rewrite this scoring logic to be more readable and modular."

4.
"Improve this CLI program to avoid deeply nested loops."

5.
"Suggest improvements for readability and maintainability of this C code."

6.
"Add a function that calculates a productivity score out of 10 based on activity thresholds."

7.
"Make the code more structured using best practices in C programming."
```
