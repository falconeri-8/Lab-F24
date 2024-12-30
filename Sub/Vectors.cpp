#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {};

    cout << "Create a vector datatype by entering integers, enter -1 to terminate" << endl;
    int input;

    while (true)
    {
        cin >> input;

        if (input == -1)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            return 0;
        } else
        {
            v.push_back(input);
        }
    }

}