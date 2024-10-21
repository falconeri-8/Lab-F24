#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message;
}

int main()
{
    int temperature;
    log ("Enter temperature integer", true);
    cin >> temperature;
    try {
        if (temperature < 0) {
            throw 501;
        }
        if (temperature > 0 && temperature <= 10) {
            throw 502;
        }
        if (temperature > 10 && temperature <= 20) {
            throw 503;
        }
        if (temperature > 20 && temperature <= 30) {
            throw 504;
        }
        if (temperature > 30 && temperature <= 40) {
            throw 505;
        }
        if (temperature >= 40) {
            throw 506;
        }
    }
    catch (int code)
    {
        if (code == 501)
        {
            log ("Freezing weather", true);
        }
        else if (code == 502)
        {
            log ("Very cold weather", true);
        }
        else if (code == 503)
        {
            log ("Cold weather", true);
        }
        else if (code == 504)
        {
            log ("Normal weather", true);
        }
        else if (code == 505)
        {
            log ("Hot weather", true);
        }
        else if (code == 506)
        {
            log ("Very hot weather", true);
        }
    }
}