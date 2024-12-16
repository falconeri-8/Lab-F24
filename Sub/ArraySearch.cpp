#include <iostream>

using namespace std;

int main()
{
    int array[5][5] = {};
    int num;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = rand() % 6;
        }
    }

    cout << "Enter number to check in array" << endl;
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == num)
            {
                cout << "Found at Row " << i << " Column " << j << endl;
            }
        }
    }

}

// dynamic memory, reference, searching