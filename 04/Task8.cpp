#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}


int main()
{
    char input = 'a';

    while (true)
    {
        log ("Input a value : ", false);
        cin >> input;

        if (isdigit(input))
        {
            input%2==0 ? log("Even Digit", true) : log("Odd digit", true);
        }
        else if (isalpha(input))
        {
            isupper(input) ? log("Uppercase Alphabet", true) : log("Lowercase Alphabet", true);
        }
        else
        {
            log ("We have a special symbol", true);
        }
    }

}