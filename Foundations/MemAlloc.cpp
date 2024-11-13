#include "Headers/Utilities.h"

using namespace std;

int pass()
{

}

int main()
{

    int number = 5;
    int* pNumber = &number;

    Cog (pNumber, 0);

    return 0;
}
