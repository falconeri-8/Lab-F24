#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string mergedText;
    fstream mergedFile;
    fstream File1;
    fstream File2;
    mergedFile.open("merged.txt", ios::out);
    File1.open("File1.txt", ios::in);
    File2.open("File2.txt", ios::in);

    while (getline(File1, mergedText)) {
        mergedFile << mergedText << endl;
    }

    mergedFile << mergedText << "\n";

    while (getline(File1, mergedText)) {
        mergedFile << mergedText << endl;
    }

    while (getline(File2, mergedText)) {
        mergedFile << mergedText << endl;
    }

    File1.close();
    File2.close();
    mergedFile.close();

    return 0;
}