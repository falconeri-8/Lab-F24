#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {5, 10, 25, 30, 50, 55, 60, 75, 15, 20};
    int sum = 0;
    float average = 0;

    // Using a range loop
    for (int i : arr)
    {
        sum += i;
    }
    average = sum / 10;
    cout << "Sum of array is " << sum << endl;
    cout << "The average of array is " << average << endl;
}