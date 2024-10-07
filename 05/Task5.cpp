#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

bool prime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    // Prime numbers ONLY divisible by itself
    return true;
}

int main()
{
    int input;

    log("Prime number check", true);
    log("Input integer", true);

    while (true) {
        cin >> input;
        if (input <= 1) {
            log("Process ended", true);
            break;
        }

        if (prime(input)) {
            log (to_string(input) + " is a prime number", true);
        } else {
            log (to_string(input) + " is NOT a prime number", true);
        }
    }


}