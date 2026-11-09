#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    char name[50];
    int roll;
    float marks[3];
    float total;
    float average;
    char grade;
};

Student students[50];
int countStudents = 0;

// Function to calculate result
void calculateResult(Student &s)
{
    s.total = s.marks[0] + s.marks[1] + s.marks[2];
    s.average = s.total / 3.0;

    if (s.average >= 90)
        s.grade = 'A';
    else if (s.average >= 75)
        s.grade = 'B';
    else if (s.average >= 50)
        s.grade = 'C';
    else
        s.grade = 'F';
}

// Add student
void addStudent()
{
    if (countStudents >= 50)
    {
        cout << "Student limit reached!\n";
        return;
    }

    Student s;

    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(s.name, 50);

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    // Check duplicate roll
    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].roll == s.roll)
        {
            cout << "Roll number already exists!\n";
            return;
        }
    }

    cout << "Enter marks of 3 subjects:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }

    calculateResult(s);

    students[countStudents++] = s;

    cout << "Student added successfully!\n";
}

// Display all students
void displayStudents()
{
    if (countStudents == 0)
    {
        cout << "No students found!\n";
        return;
    }

    cout << "\nName\tRoll\tTotal\tAverage\tGrade\n";
    for (int i = 0; i < countStudents; i++)
    {
        cout << students[i].name << "\t"
             << students[i].roll << "\t"
             << students[i].total << "\t"
             << students[i].average << "\t"
             << students[i].grade << endl;
    }
}

// Search student
void searchStudent()
{
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].roll == roll)
        {
            cout << "\nStudent Found:\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Roll: " << students[i].roll << endl;
            cout << "Total: " << students[i].total << endl;
            cout << "Average: " << students[i].average << endl;
            cout << "Grade: " << students[i].grade << endl;
            return;
        }
    }

    cout << "Student not found!\n";
}

// Find topper
void findTopper()
{
    if (countStudents == 0)
    {
        cout << "No students available!\n";
        return;
    }

    int topperIndex = 0;

    for (int i = 1; i < countStudents; i++)
    {
        if (students[i].average > students[topperIndex].average)
        {
            topperIndex = i;
        }
    }

    cout << "\nTopper Details:\n";
    cout << "Name: " << students[topperIndex].name << endl;
    cout << "Roll: " << students[topperIndex].roll << endl;
    cout << "Average: " << students[topperIndex].average << endl;
    cout << "Grade: " << students[topperIndex].grade << endl;
}

// Main menu
int main()
{
    int choice;

    do
    {
        cout << "\n===== Student Manager =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Find Topper\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            findTopper();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}