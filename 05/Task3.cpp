#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int main()
{
    int sum, num;
    log("Input 10 integers to get their average", true);

    for (int i = 1; i <= 10; i++)
    {
        cin >> num;
        sum += num;
    }

    log("The average is " + to_string(sum/10), true);

}