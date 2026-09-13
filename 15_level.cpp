#include <iostream>

int main() {
  int levels = 11;

  if (levels < 6) {
    std::cout << "🥉 Bronze\n";
  }
  else if (levels < 11) {
    std::cout << "🥈 Silver\n";
  }
  else if (levels < 16) {
    std::cout << "🥇 Gold\n";
  }
  else if (levels < 21) {
    std::cout << "🏅 Platinum\n";
  }
  else {
    std::cout << "💎 Diamond\n";
  }
}