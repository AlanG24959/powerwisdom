#include <iostream>
#include "src/power.hpp"

int main() {
  TriangleNumberCalculator calculator;

  std::cout << calculator.value(1) << "\n";
  std::cout << calculator.value(2) << "\n";
  std::cout << calculator.value(4) << "\n";

  std::cout << calculator.add(1, 1) << "\n";
  std::cout << calculator.add(2, 3) << "\n";
  std::cout << calculator.add(4, 2) << "\n";

  std::cout << calculator.subtract(1, 1) << "\n";
  std::cout << calculator.subtract(2, 3) << "\n";
  std::cout << calculator.subtract(4, 2) << "\n";
}
