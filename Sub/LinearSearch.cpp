#include <iostream>

using namespace std;

int linearSearch(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter number to search in array" << endl;
    cin >> n;

    n = linearSearch(arr, n);

    if (n == -1)
    {
        cout << "Element not found" << endl;
    } else
    {
        cout << "Element found at index " << n << endl;
    }

    return 0;
}