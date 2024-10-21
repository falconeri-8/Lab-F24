#ifndef COG_H
#define COG_H

#include <iostream>
#include <sstream>

using namespace std;

template <typename type>
string Str (type value) {
    ostringstream Stream;
    Stream << value;
    return Stream.str();
}

template <typename type>
void Cog(type message, int indent) {
    cout << (indent == 1 ? Str (message) + '\n' :
        indent == 2 ? "\n" + Str (message) + "\n" :
        Str (message)
        );
}

#endif //COG_H
