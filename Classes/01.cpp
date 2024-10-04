#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

class expenseCalculator {
    protected: // Access specifier, It could be "private" or "public"
        bool boolfuelCalculator = true; // Set true or false
};

class fuelCalculator: public expenseCalculator {
    public:
        float distance; // Km
        float fuelRate; // Any/L
        float vehicleFuelAverage; // Km/L

        string getTotalCost() {
            if (boolfuelCalculator == true) {
                log ("Welcome to Fuel Calculator", true);
                log ("Enter total travel distance (km) : ", false);
                cin >> distance;
                log ("Enter your vehicle fuel average (km/l) : ", false);
                cin >> vehicleFuelAverage;
                log ("Enter fuel rate (pkr/l) : ", false);
                cin >> fuelRate;

                return "Your total fuel expense is " + to_string((distance/vehicleFuelAverage) * fuelRate);
            }
            else {
                return ("Sorry, Fuel Calculator is disabled");
            }

        }
};


int main() {
    int input;

    log ("-------------------------------", true); // For readability
    log ("Welcome to expense calculator", true);
    log ("Input 1 for Fuel Calculator", true);

    // expenseCalculator expenseCalculator; // Could Get Parent class

    fuelCalculator fuelCalculator;

    cin >> input;

    if (input == 1) {
        log (fuelCalculator.getTotalCost(), true);
    }
    else {
        log ("Invalid input", true);
    }
    return 0;
}