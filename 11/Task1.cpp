#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student student;

    cout << "Enter student's name: ";
    getline(cin, student.name);
    cout << "Enter student's roll number: ";
    cin >> student.roll;
    cout << "Enter student's marks: ";
    cin >> student.marks;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.roll << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}
