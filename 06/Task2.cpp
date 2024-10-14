#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int GetPopulationSize( int prevSize, int birthRate, int deathRate, int numYears)
{
    int populationSize = prevSize + (birthRate * prevSize) - (deathRate * prevSize);
    // numYears * populationSize // Task formula shows no value for numYears
    return (populationSize);
}

int main()
{
    int prevSize, birthRate, deathRate, numYears;

    log("Calculate population size for given years", true);
    log ("Input starting population size", true);
    cin >> prevSize;
    log ("Input annual birth rate", true);
    cin >> birthRate;
    log ("Input annual death rate", true);
    cin >> deathRate;
    log ("Input for number of years", true);
    cin >> numYears;

    log ("The population size will be : " + to_string(GetPopulationSize(prevSize, birthRate, deathRate, numYears)), true);

}