#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int reverseArr[size];

    for (int i = 0; i < size; i++)
    {
        reverseArr[i] = arr[size - i - 1];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << reverseArr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, 5);

    return 0;
}