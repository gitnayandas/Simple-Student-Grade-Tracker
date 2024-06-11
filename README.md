# StudentGradeTracker

A simple C++ console application to keep track of student grades. Users can add, update, delete, and view student grades, as well as calculate the average grade for a student.

## Features

- **Add Grade**: Add a grade for a student.
- **Update Grade**: Update a specific grade for a student.
- **Delete Grade**: Delete a specific grade for a student.
- **View Grades**: View all grades for a student.
- **Calculate Average**: Calculate the average grade for a student.

## Getting Started

### Prerequisites

- C++ Compiler (e.g., `g++`, MinGW on Windows, Xcode Command Line Tools on macOS, or `g++` on Linux)
- [Visual Studio Code](https://code.visualstudio.com/) (optional, but recommended for easier development and debugging)
- [C/C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

### Installation

1. **Clone the Repository**

    ```bash
    git clone (https://github.com/gitnayandas/Simple-Student-Grade-Tracker.git)
    cd StudentGradeTracker
    ```

2. **Open the Project in VS Code**

    Open Visual Studio Code and select `File > Open Folder`. Choose the `StudentGradeTracker` folder you just cloned.

3. **Set Up VS Code for C++ Development**

    - Install the C/C++ extension if you haven't already.
    - Configure the build task. Go to `Terminal > Configure Default Build Task` and select `g++` or the appropriate compiler.

4. **Build and Run the Project**

    - Open the terminal in VS Code (`Terminal > New Terminal`).
    - Build the project by pressing `Ctrl+Shift+B` or running the build task.
    - Run the executable from the terminal:
      - On Windows: `./main.exe`
      - On macOS/Linux: `./main`

## Usage

Upon running the program, you will see a menu with the following options:

1. Add Grade
2. Update Grade
3. Delete Grade
4. View Grades
5. Calculate Average
6. Exit

Follow the prompts to interact with the program:

- **Add Grade**: Enter the student's name and the grade you wish to add.
- **Update Grade**: Enter the student's name, the index of the grade to update, and the new grade.
- **Delete Grade**: Enter the student's name and the index of the grade to delete.
- **View Grades**: Enter the student's name to view all grades for that student.
- **Calculate Average**: Enter the student's name to calculate the average grade for that student.
- **Exit**: Choose this option to exit the program.

### Example

```text
Student Grade Tracker
1. Add Grade
2. Update Grade
3. Delete Grade
4. View Grades
5. Calculate Average
6. Exit
Enter your choice: 1
Enter student name: JohnDoe
Enter grade: 95.5

Student Grade Tracker
1. Add Grade
2. Update Grade
3. Delete Grade
4. View Grades
5. Calculate Average
6. Exit
Enter your choice: 4
Enter student name: JohnDoe
Grades for JohnDoe: 95.50 
