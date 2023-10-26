#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Define a structure to represent student information
struct Student {
    std::string name;
    int studentID;
    std::string contactInfo;
    // You can add more fields as needed
};

// Define a structure to represent course information
struct Course {
    std::string courseName;
    int courseID;
    // You can add more fields as needed
};

// Define a structure to represent student grades
struct Grade {
    int studentID;
    int courseID;
    float assignmentScore;
    float midtermScore;
    float finalScore;
    // You can add more fields as needed
};

// Function to add a new student
void addStudent(std::vector<Student>& students) {
    // Implement the logic to add a new student
}

// Function to add a new course
void addCourse(std::vector<Course>& courses) {
    // Implement the logic to add a new course
}

// Function to enter grades for a student
void enterGrades(std::vector<Grade>& grades) {
    // Implement the logic to enter grades
}

// Function to calculate the final grade for a student in a course
float calculateFinalGrade(int studentID, int courseID, const std::vector<Grade>& grades) {
    // Implement the logic to calculate the final grade
}

int main() {
    std::vector<Student> students;
    std::vector<Course> courses;
    std::vector<Grade> grades;

    // Implement the main menu to interact with the gradebook
    // You can add options to add students, courses, enter grades, calculate final grades, etc.

    return 0;
}
