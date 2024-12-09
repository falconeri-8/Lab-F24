#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

int GetHighestInRow(int arr[ROWS][COLS], int row, int*& ptr) {
    int maxVal = arr[row][0];
    ptr = &arr[row][0];
    for (int i = 1; i < COLS; i++) {
        if (arr[row][i] > maxVal) {
            maxVal = arr[row][i];
            ptr = &arr[row][i];
        }
    }
    return maxVal;
}

int GetLowestInRow(int arr[ROWS][COLS], int row, int*& ptr) {
    int minVal = arr[row][0];
    ptr = &arr[row][0];
    for (int i = 1; i < COLS; i++) {
        if (arr[row][i] < minVal) {
            minVal = arr[row][i];
            ptr = &arr[row][i];
        }
    }
    return minVal;
}

int GetHighestInColumn(int arr[ROWS][COLS], int col, int*& ptr) {
    int maxVal = arr[0][col];
    ptr = &arr[0][col];
    for (int i = 1; i < ROWS; i++) {
        if (arr[i][col] > maxVal) {
            maxVal = arr[i][col];
            ptr = &arr[i][col];
        }
    }
    return maxVal;
}

int GetLowestInColumn(int arr[ROWS][COLS], int col, int*& ptr) {
    int minVal = arr[0][col];
    ptr = &arr[0][col];
    for (int i = 1; i < ROWS; i++) {
        if (arr[i][col] < minVal) {
            minVal = arr[i][col];
            ptr = &arr[i][col];
        }
    }
    return minVal;
}

int LeftDiagonalTotal(int arr[ROWS][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += arr[i][i];
    }
    return total;
}

int RightDiagonalTotal(int arr[ROWS][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += arr[i][COLS - 1 - i];
    }
    return total;
}

int RowSum(int arr[ROWS][COLS], int row) {
    int total = 0;
    for (int i = 0; i < COLS; i++) {
        total += arr[row][i];
    }
    return total;
}

int ColumnSum(int arr[ROWS][COLS], int col) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += arr[i][col];
    }
    return total;
}

int main() {
    int testArray[ROWS][COLS] = {
        {10, 20, 30},
        {50, 60, 70},
        {90, 100, 110},
    };

    int* ptr = nullptr;

    int row = 1, col = 2;
    cout << "Highest in Row " << row << ": "
              << GetHighestInRow(testArray, row, ptr) << ", Address: " << ptr << endl;
    cout << "Lowest in Row " << row << ": "
              << GetLowestInRow(testArray, row, ptr) << ", Address: " << ptr << endl;
    cout << "Highest in Column " << col << ": "
              << GetHighestInColumn(testArray, col, ptr) << ", Address: " << ptr << endl;
    cout << "Lowest in Column " << col << ": "
              << GetLowestInColumn(testArray, col, ptr) << ", Address: " << ptr << endl;

    cout << "Left Diagonal Total: " << LeftDiagonalTotal(testArray) << endl;
    cout << "Right Diagonal Total: " << RightDiagonalTotal(testArray) << endl;

    cout << "Row " << row << " Sum: " << RowSum(testArray, row) << endl;
    cout << "Column " << col << " Sum: " << ColumnSum(testArray, col) << endl;

    return 0;
}