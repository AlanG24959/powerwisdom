#include <iostream>
#include "src/power.hpp"

int main() {
  TriangleNumberCalculator calc;
  int choice;
  int n, m;

  std::cout << "Triangle Number Calculator\n";
  std::cout << "1: value(n)\n2: add(n, m)\n3: subtract(n, m)\n";
  std::cout << "Enter your choice: ";
  std::cin >> choice;

  if (choice == 1) {
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "T(" << n << ") = " << calc.value(n) << "\n";
  } else if (choice == 2) {
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter m: ";
    std::cin >> m;
    std::cout << "T(" << n << ") + T(" << m << ") = " << calc.add(n, m) << "\n";
  } else if (choice == 3) {
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter m: ";
    std::cin >> m;
    std::cout << "T(" << n << ") - T(" << m << ") = " << calc.subtract(n, m) << "\n";
  } else {
    std::cout << "Invalid choice.\n";
  }

  return 0;
}
