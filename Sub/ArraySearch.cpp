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
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == num)
            {
                cout << "Found at Row " << i << " Column " << j << endl;
                //return 1;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// dynamic memory, reference, searching