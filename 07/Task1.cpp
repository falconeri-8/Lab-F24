#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int main ()
{
    string input;
    log ("Enter character", true);
    cin >> input;

    try
    {
        if (input != "m" && input != "M")
        {
            log (input + " - is an allowed character", true);
        } else
        {
            throw 101;
        }

    }
    catch(int code)
    {
        log ("Error : " + to_string(code) + " - " + input + " is not an allowed character" , true);
    }
    return 0;
}