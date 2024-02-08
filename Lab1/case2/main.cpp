// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Course
{
    std::string course_code;
    std::string course_name;
};

struct Grade
{
    int mark;
    char the_grade;

    void calculate_grade()
    {
        if (mark > 69)
        {
            the_grade = 'A';
        }
        else if (mark > 59)
        {
            the_grade = 'B';
        }
        else if (mark > 49)
        {
            the_grade = 'C';
        }
        else if (mark > 39)
        {
            the_grade = 'D';
        }
        else
        {
            the_grade = 'E';
        }
    }
};

struct Student
{
    std::string reg_number;
    std::string name;
    int age;
    Course course;
    Grade grade;

    void set_details(const std::string &reg_number, const std::string &name, int age,
                     const std::string &course_code, const std::string &course_name)
    {
        this->reg_number = reg_number;
        this->name = name;
        this->age = age;
        this->course.course_code = course_code;
        this->course.course_name = course_name;
    }
};

class StudentManagement
{
public:
    void add_student(const Student &student);
    void edit_student(const std::string &reg_number);
    void add_marks(const std::string &reg_number, int mark);
    void display_students(); // Added method to display all students

private:
    Student students[40]; // Array to store up to 40 students
    int num_students;

    bool find_student(const std::string &reg_number, int *index);
    void ensure_space_available();
};

#endif

// main.
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    StudentManagement student_management;

    // Example usage (replace with user interaction)
    Student student1;
    student1.set_details("ABC123", "John Doe", 20, "CSC101", "Introduction to Computer Science");
    student_management.add_student(student1);

    Student student2;
    student2.set_details("DEF456", "Jane Smith", 19, "MATH202", "Calculus II");
    student_management.add_student(student2);

    student_management.add_marks("ABC123", 85);
    student_management.add_marks("DEF456", 92);

    student_management.display_students();

    return 0;
}
