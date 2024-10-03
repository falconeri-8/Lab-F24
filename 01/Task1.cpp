#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float x;
    cout << "Input float to calculate sin value :";
    cin >> x;
    cout << sin(x) << "\n";

    cout << "Input float to calculate cos value :";
    cin >> x;
    cout << cos(x) << "\n";

    cout << "Input float to calculate tan value :";
    cin >> x;
    cout << tan(x) << "\n";

    cout << "Input float to take its square :";
    cin >> x;
    cout << pow(x, 2) << "\n";

    cout << "Input float to take its square root :";
    cin >> x;
    cout << sqrt(x) << "\n";

    cout << "Input float to return least integer greater than input :";
    cin >> x;
    cout << ceil(x) << "\n";

    cout << "Input float to return largest integer less than input :";
    cin >> x;
    cout << ceil(x) << "\n";

    cout << "Input float to get its common log :";
    cin >> x;
    cout << log10(x) << "\n";

    cout << "Input float to get its natural log :";
    cin >> x;
    cout << log(x) << "\n";
    // return 0;
}