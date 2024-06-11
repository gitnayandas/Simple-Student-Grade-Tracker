#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <limits>

class StudentGradeTracker {
public:
    void addGrade(const std::string& student, double grade) {
        grades[student].push_back(grade);
    }

    void updateGrade(const std::string& student, int index, double newGrade) {
        if (grades.find(student) != grades.end() && index >= 0 && index < grades[student].size()) {
            grades[student][index] = newGrade;
        } else {
            std::cout << "Invalid student or grade index.\n";
        }
    }

    void deleteGrade(const std::string& student, int index) {
        if (grades.find(student) != grades.end() && index >= 0 && index < grades[student].size()) {
            grades[student].erase(grades[student].begin() + index);
        } else {
            std::cout << "Invalid student or grade index.\n";
        }
    }

    void viewGrades(const std::string& student) const {
        if (grades.find(student) != grades.end()) {
            std::cout << "Grades for " << student << ": ";
            for (double grade : grades.at(student)) {
                std::cout << std::fixed << std::setprecision(2) << grade << " ";
            }
            std::cout << "\n";
        } else {
            std::cout << "Student not found.\n";
        }
    }

    double calculateAverage(const std::string& student) const {
        if (grades.find(student) != grades.end() && !grades.at(student).empty()) {
            double sum = 0;
            for (double grade : grades.at(student)) {
                sum += grade;
            }
            return sum / grades.at(student).size();
        } else {
            std::cout << "Student not found or no grades available.\n";
            return 0;
        }
    }

private:
    std::map<std::string, std::vector<double>> grades;
};

bool getValidDouble(double& value) {
    std::cin >> value;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main() {
    StudentGradeTracker tracker;
    int choice;
    std::string student;
    double grade;
    int index;

    do {
        std::cout << "\nStudent Grade Tracker\n";
        std::cout << "1. Add Grade\n";
        std::cout << "2. Update Grade\n";
        std::cout << "3. Delete Grade\n";
        std::cout << "4. View Grades\n";
        std::cout << "5. Calculate Average\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter student name: ";
                std::cin >> student;
                std::cout << "Enter grade: ";
                while (!getValidDouble(grade)) {
                    std::cout << "Invalid input. Enter a numeric grade: ";
                }
                tracker.addGrade(student, grade);
                break;
            case 2:
                std::cout << "Enter student name: ";
                std::cin >> student;
                std::cout << "Enter grade index: ";
                std::cin >> index;
                std::cout << "Enter new grade: ";
                while (!getValidDouble(grade)) {
                    std::cout << "Invalid input. Enter a numeric grade: ";
                }
                tracker.updateGrade(student, index, grade);
                break;
            case 3:
                std::cout << "Enter student name: ";
                std::cin >> student;
                std::cout << "Enter grade index: ";
                std::cin >> index;
                tracker.deleteGrade(student, index);
                break;
            case 4:
                std::cout << "Enter student name: ";
                std::cin >> student;
                tracker.viewGrades(student);
                break;
            case 5:
                std::cout << "Enter student name: ";
                std::cin >> student;
                std::cout << "Average grade for " << student << ": " << std::fixed << std::setprecision(2) << tracker.calculateAverage(student) << "\n";
                break;
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
