# 🧠 Daily Routine Analyser (Revived Hackathon Project)

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
