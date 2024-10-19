#ifndef COG_H
#define COG_H

#include <iostream>
#include <sstream>
using namespace std;
template <typename type>

void log(type message, int indent)
{
    ostringstream Stringed;
    Stringed << message;

    cout << (indent == 1 ? Stringed.str() + "\n" :
             indent == 2 ? "\n" + Stringed.str() + "\n" :
             Stringed.str()
    );
}

#endif //COG_H
