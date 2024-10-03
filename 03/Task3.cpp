#include <iostream>

using namespace std;

int main()
{
    float Held;
    float attended;
    float attendance;

    while (true) {

        cout << "Enter total classes held" << endl;
        cin >> Held;
        cout << "Enter student's attended classes" << endl;
        cin >> attended;
       
        attendance = (attended / Held) * 100;

        if (attendance >= 75) {
            cout << "Student has " << attendance << " & allowed to sit in exams" << endl;
        }
        else if (attendance < 75) {
            cout << "Student has " << attendance << " & NOT allowed to sit in exams." << endl;
        }
    }
}