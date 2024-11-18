#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {100, 50, 200, 100, 300};
    int min = 0, max = 0;
    for (int i = 0 ; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return 0;
}