#include <iostream>

using namespace std;

int main()
{
    int serviceYears;
    int salary;

    cout << "Calculate your bonus" << endl;
    cout << "Enter your Years of Service" << endl;
    cin >> serviceYears;
    cout << "Enter your Salary" << endl;
    cin >> salary;

    if (serviceYears > 5) {
        float bonus;
        bonus = (salary * 5 / 100);
        cout << "Your net bonus is " << bonus << endl;
    }
    else if (serviceYears < 5) {
        cout << "You are not eligible for bonus" << endl;
    }
}