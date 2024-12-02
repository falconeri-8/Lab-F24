#include <iostream>
using namespace std;

int main()
{

    int array[2] = {0, 1};

    cout << *array+1 << endl;

    //

    int Array[2][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}