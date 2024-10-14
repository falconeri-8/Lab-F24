#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int getAngle(int angle1, int angle2)
{
    return (180 - (angle2 + angle1));
}

int main()
{
    int angle1, angle2;
    log("Calculate third angle of a triangle", true);
    log("Input First angle : ", false);
    cin >> angle1;
    log("Input Second angle : ", false);
    cin >> angle2;

    log ("The third angle of triangle : " + to_string(getAngle(angle1, angle2)), true);

}