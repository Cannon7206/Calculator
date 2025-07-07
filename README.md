Calculator

A simple cross-platform calculator app built with C++ and Qt. This project demonstrates a basic GUI application capable of performing arithmetic operations and handling simple mathematical expressions.

📋 Features

Basic arithmetic operations: addition, subtraction, multiplication, division.

User-friendly GUI using Qt Widgets.

Expression parsing with custom logic.

Clear display for inputs and results.

Error handling for invalid expressions.

🧰 Tech Stack

Language: C++

Framework: Qt (Tested with Qt 5/6)

Build System: CMake

🚀 Getting Started

Prerequisites

Qt Creator or Qt installed and set up.

C++ compiler (e.g., GCC, MSVC).

CMake.

Build & Run

Clone the repository

git clone https://github.com/Cannon7206/Calculator.git
cd Calculator

Open with Qt Creator

Open Calculator.pro (if using .pro), or the CMake project in Qt Creator.

Click Build then Run.

Or build manually:

mkdir build
cd build
cmake ..
make
./Calculator

How to Use

Enter your numbers and operations using the on-screen buttons.

Click = to calculate the result.

Click C to clear the input.

📂 Project Structure

Calculator/
 ├── main.cpp
 ├── mainwindow.cpp
 ├── mainwindow.h
 ├── mainwindow.ui
 ├── CMakeLists.txt or .pro file
 └── README.md

✅ Todo / Future Improvements

Support for parentheses and more complex expressions.

Scientific operations (square roots, exponents, trigonometric functions).

Memory functions (M+, M-, MR, MC).

Better error messages.

🤝 Contributing

Pull requests are welcome! For major changes, please open an issue first to discuss what you’d like to add.

📄 License

MIT © 2025 Christian Philpot

