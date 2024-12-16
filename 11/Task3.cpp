#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee {
    string employeeName;
    int employeeID;
    double salary;
};

void DisplayEmployeesRecord(Employee a[], int s) {
    for (int i = 0; i < s; i++) {
        cout << "Employee Name: " << a[i].employeeName
             << ", Employee ID: " << a[i].employeeID
             << ", Salary: " << a[i].salary << endl;
    }
}

void StoreToFile(Employee a[], int s) {
    ofstream f("employeeRecords.txt");
    for (int i = 0; i < s; i++) {
        f << a[i].employeeName << " " << a[i].employeeID << " " << a[i].salary << endl;
    }
}

void StoreToArray(Employee a[], int s) {
    ifstream f("employeeRecords.txt");
    for (int i = 0; i < s; i++) {
        f >> a[i].employeeName >> a[i].employeeID >> a[i].salary;
    }
}

int main() {
    const int size = 10;
    Employee employees[size];
    Employee readEmployees[size];

    cout << "Enter information for 10 employees:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter employee name: ";
        cin >> employees[i].employeeName;
        cout << "Enter employee ID: ";
        cin >> employees[i].employeeID;
        cout << "Enter salary: ";
        cin >> employees[i].salary;
    }

    cout << "\nEmployee Records:" << endl;
    DisplayEmployeesRecord(employees, size);

    ofstream outFile("employeeRecords.txt");
    if (outFile.is_open()) {
        StoreToFile(employees, size);
        outFile.close();
        cout << "\nEmployee records have been stored to 'employeeRecords.txt'." << endl;
    } else {
        cout << "Error opening file for writing!" << endl;
    }

    ifstream inFile("employeeRecords.txt");
    if (inFile.is_open()) {
        StoreToArray(readEmployees, size);
        inFile.close();
        cout << "\nEmployee records read from file and stored in the array:" << endl;
        DisplayEmployeesRecord(readEmployees, size);
    } else {
        cout << "Error opening file for reading!" << endl;
    }

    return 0;
}
