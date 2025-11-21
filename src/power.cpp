#include "power.hpp"

int TriangleNumberCalculator::value(int n) {
   if (n <= 1) {
      return n;
   }
   return n + value(n - 1);
}

int TriangleNumberCalculator::add(int n, int m) {
   return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
   return value(n) - value(m);
}
