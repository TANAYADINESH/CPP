#include <iostream>
using namespace std;

int main() {
  int guess = 0;
  
 cout << "Guess the number: ";
 cin >> guess;

  while (guess != 64) {
    cout << "Wrong guess! Guess the number: ";
    cin >> guess;
  }

  cout << "You guessed it correctly!";
}