#include "Fraction.h"
#include <numeric>
#include <iostream>

Fraction::Fraction() {
  numerator = 0;
  denominator = 0;
}

Fraction::Fraction(int numer, int denom) {
  numerator = numer;
  denominator = denom;
  this->reduce();
}

void Fraction::print() {
  std::cout << numerator << "/" << denominator << "\n";
}

void Fraction::reduce() {
  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}