#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int main()
{
    log("Enter Positive integers to get count, min, max & average", true);
    log("Get Result with -1", true);

    int input, min, max, sum, count;

    while (true)
    {
        cin >> input;
        if (input == -1) {
            log ("Count = " + to_string(count) + "", true);
            log ("Minimum = " + to_string(min) + "", true);
            log ("Maximum = " + to_string(max) + "", true);
            log ("Average = " + to_string(sum/10) + "", true);
            break;
        }
        if (input <= -2 || input == 0)
        {
            log ("Enter positive integers", true);
        }
        else {
            count += 1;
            sum += input;
            if (min > input)
            {
                min = input;
            }
            if (max < input)
            {
                max = input;
            }
        }
    }

}