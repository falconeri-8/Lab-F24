#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int main()
{
    int first;
    int second;
    int third;
    int fourth;
    int fifth;

    int greatest;

    log ("------------------", true);
    log ("Get greater number", true);
    log ("Input first number : ", false);
    cin >> first;
    log ("Input second number : ", false);
    cin >> second;
    log ("Input third number : ", false);
    cin >> third;
    log ("Input fourth number : ", false);
    cin >> fourth;
    log ("Input fifth number : ", false);
    cin >> fifth;

    if (first > second && first > third && first > fourth && first > fifth)
    {
        log (to_string(first) + " is the greatest integer", true);
    }
    if (second > first && second > third && second > fourth && second > fifth)
    {
        log (to_string(second) + " is the greatest integer", true);
    }
    if (third > first && third > second && third > fourth && third > fifth)
    {
        log (to_string(third) + " is the greatest integer", true);
    }
    if (fourth > first && fourth > second && fourth > third && fourth > fifth)
    {
        log (to_string(fourth) + " is the greatest integer", true);
    }
    if (fifth > first && fifth > second && fifth > third && fifth > fourth)
    {
        log (to_string(fifth) + " is the greatest integer", true);
    }

    return 0;
}