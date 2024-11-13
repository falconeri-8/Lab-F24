#include <iostream>
using namespace std;

int main() {
  int scoops = 0;
  int input;

  while (true) {
    cout << "Type 0 to add scoops, -1 to quit " << endl;
    cin >> input;

    if (input == 0) {
      scoops += 1;

    } else if (input == -1) {
      cout << "Your icecream has " << scoops << " scoops." << endl;
      break;
    }
   }

}