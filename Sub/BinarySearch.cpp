#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[25];
    for (int i = 0; i < 25; i++)
    {
        arr[i] = i + 1;
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the element to be searched: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
