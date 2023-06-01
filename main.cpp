#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
  Fraction f1(1,2);
  Fraction f2(4,2);

  f1.print(), f2.print();

  Fraction f3 = f1 / f2;
  Fraction f4 = f1 * f2;

  f3.print(), f4.print();

  bool bigger = f1 > f2;
  bool smaller = f1 < f2;
  bool equal = f1 == f2;
  cout << bigger << " " <<  smaller << " " << equal << "\n";
}