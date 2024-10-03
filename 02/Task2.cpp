#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const string content2 = "The rose is red. \n A girl is playing there. \n There is a playground. \n An aeroplane is in the sky. \n Numbers are not allowed in the password.";

    fstream File2;
    File2.open("File2.txt", ios::out);
    File2 << content2 << endl;
    File2.close();

}