#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const string content = "Abdullah ibn Mas’ud reported: The Messenger of Allah, peace and blessings be upon him, said, “Most of the sins of the children of Adam are on their tongues.” \n \n Ibn Mas’ud said, “O tongue! Speak goodness and be rewarded, or remain silent and be safe, lest you become regretful.” \n \n Source: al-Mu’jam al-Kabīr lil-Ṭabarānī 10300";

    fstream File;
    File.open("File1.txt", ios::out);
    File << content << endl;
    File.close();
}