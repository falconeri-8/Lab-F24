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

void DisplayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Get highest value in a row" << endl;
    cout << "2. Get lowest value in a row" << endl;
    cout << "3. Get highest value in a column" << endl;
    cout << "4. Get lowest value in a column" << endl;
    cout << "5. Calculate left diagonal total" << endl;
    cout << "6. Calculate right diagonal total" << endl;
    cout << "7. Calculate row sum" << endl;
    cout << "8. Calculate column sum" << endl;
    cout << "9. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    int testArray[ROWS][COLS] = {
        {10, 20, 30},
        {50, 60, 70},
        {90, 100, 110},
    };

    int choice, row, col;
    int* ptr = nullptr;

    do {
        DisplayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter row number (0-2): ";
                cin >> row;
                cout << "Highest in Row " << row << ": "
                     << GetHighestInRow(testArray, row, ptr) << ", Address: " << ptr << endl;
                break;
            case 2:
                cout << "Enter row number (0-2): ";
                cin >> row;
                cout << "Lowest in Row " << row << ": "
                     << GetLowestInRow(testArray, row, ptr) << ", Address: " << ptr << endl;
                break;
            case 3:
                cout << "Enter column number (0-2): ";
                cin >> col;
                cout << "Highest in Column " << col << ": "
                     << GetHighestInColumn(testArray, col, ptr) << ", Address: " << ptr << endl;
                break;
            case 4:
                cout << "Enter column number (0-2): ";
                cin >> col;
                cout << "Lowest in Column " << col << ": "
                     << GetLowestInColumn(testArray, col, ptr) << ", Address: " << ptr << endl;
                break;
            case 5:
                cout << "Left Diagonal Total: " << LeftDiagonalTotal(testArray) << endl;
                break;
            case 6:
                cout << "Right Diagonal Total: " << RightDiagonalTotal(testArray) << endl;
                break;
            case 7:
                cout << "Enter row number (0-2): ";
                cin >> row;
                cout << "Row " << row << " Sum: " << RowSum(testArray, row) << endl;
                break;
            case 8:
                cout << "Enter column number (0-2): ";
                cin >> col;
                cout << "Column " << col << " Sum: " << ColumnSum(testArray, col) << endl;
                break;
            case 9:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
