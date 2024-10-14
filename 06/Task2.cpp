#include <iostream>

using namespace std;

void log(string message, bool newLine) {
    newLine == true ? cout << message << "\n" : cout << message; // Ternary "?" statement
}

int GetPopulationSize( int prevSize, int birthRate, int deathRate, int numYears)
{
    float populationSize = prevSize;

    for (int i = 0; i < numYears; ++i) {
        populationSize += ((birthRate/100.0) * populationSize) - ((deathRate/100.0) * populationSize);
    }

    return (populationSize);
}

int recur(string message, int condition)
{
    int prev;

    cin >> prev;

    if (prev <= condition)
    {
        log(message, true);
        prev = recur(message, condition);
    }

    return prev;
}

int main()
{
    int prevSize, birthRate, deathRate, numYears;

    log("Calculate population size for given years", true);
    log ("Input starting population size", true);
    prevSize = recur("Starting population should be greater than 1", 1);
    log ("Input annual birth rate", true);
    birthRate = recur("Annual birth rate should be greater than 0", 0);
    log ("Input annual death rate", true);
    cin >> deathRate;
    log ("Input for number of years", true);
    cin >> numYears;

    log ("The population size will be : " + to_string(GetPopulationSize(prevSize, birthRate, deathRate, numYears)), true);

}