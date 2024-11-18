#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Array elements: ";

    // Using a range loop
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}