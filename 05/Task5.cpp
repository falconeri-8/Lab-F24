#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int main()
{
    int input;

    log("Hello, World!", true);

    while (true)
    {

        if (input <= 1)
        {
            log("Process ended", true);
            break;
        }
        else
        {
            // Prime numbers ONLY divisible by itself
           for (int i = 2; i <= input; i++)
           {
               if (input % i == 0)
               {
                   log (input + " is not a prime number", true);
               }
           }
        }
    }


}