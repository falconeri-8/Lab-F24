#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for the jagged array: ";
    cin >> rows;

    // Create jagged array
    int** jaggedArray = new int*[rows];
    int* columnSizes = new int[rows]; // To store the size of each row

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        int cols;
        cin >> cols;

        columnSizes[i] = cols; // Save the column size for later use
        jaggedArray[i] = new int[cols];

        for (int j = 0; j < cols; j++)
        {
            jaggedArray[i][j] = i + j; // Initialize array
        }
    }

    // Print the jagged array
    cout << "The array is:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columnSizes[i]; j++) // Use stored column sizes
        {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < rows; ++i)
    {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;
    delete[] columnSizes;

    return 0;
}
