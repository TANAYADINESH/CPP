#include <iostream>
using namespace std;

int main() {
  for (int i = 99; i > 0; i--) {
    cout << i << " bottles of beer on the wall\n";
    cout << i << " bottles of beer\n";
    cout << "Take one down, pass it around\n";
    cout << i-1 << " bottles of beer on the wall\n\n";
  }
}