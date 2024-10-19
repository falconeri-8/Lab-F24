#include <cmath>

#include "Headers/Cog.h"

using namespace std;

int main()
{

    int number = 5;
    int* pNumber = &number;

    log (*pNumber, 0);

    return 0;
}
