#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int getVolume(int radius)
{
    return (1.33 * 3.14 * (radius * radius * radius));
}

int main()
{
    log ("Enter radius of sphere to get its volume", true);
    int radius;
    cin >> radius;
    cout << "Volume of sphere is " << getVolume(radius) << endl;
}