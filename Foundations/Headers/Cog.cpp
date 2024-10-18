#include "Cog.h"
#include <iostream>

using namespace std;

void log(const string& message, int indent) {
    cout << (indent == 1 ? message + "\n" :
             indent == 2 ? "\n" + message + "\n" :
             message);
}
