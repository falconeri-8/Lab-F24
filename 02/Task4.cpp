#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream File1;
    File1.open("File1.txt", ios::app);
    File1 << "\n It was narrated from Abu Hurairah that: \n The Prophet said: “The best of charity is when a Muslim man gains knowledge, then he teaches it to his Muslim brother.” \n — Sunan Ibn Majah, Vol. 1, Book 1, Hadith 243";
    File1.close();

    return 0;
}