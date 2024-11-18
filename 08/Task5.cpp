#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 12, 7, 9, 3, 15, 8, 1, 14, 10};
    int searchElement;

    cout << "Enter the element to search: ";
    cin >> searchElement;

    bool found = false;

    for(int i = 0; i < 10; i++) {
        if (arr[i] == searchElement) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found in the array." << endl;

    }
    return 0;
}