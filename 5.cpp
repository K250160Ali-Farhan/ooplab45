#include <iostream>
using namespace std;

class Department
{
private:
    string deptName;
    string deptCode;

public:
    void setDepartment()
    {
        cout << "Enter Department Name: ";
        getline(cin, deptName);

        cout << "Enter Department Code: ";
        getline(cin, deptCode);
    }

    void showDepartment() const
    {
        cout << "Department: " << deptName << endl;
        cout << "Code      : " << deptCode << endl;
    }
};

class Student
{
private:
    string studentName;
    int age;
    Department department;

public:
    void setStudent()
    {
        cout << "\nEnter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(); // Clear newline from buffer

        department.setDepartment();
    }

    void showStudent() const
    {
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Age         : " << age << endl;
        department.showDepartment();
    }
};

int main()
{
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
