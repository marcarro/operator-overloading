#include "Fraction.h"
#include <numeric>
#include <iostream>

// TODO: a, b, f, g

Fraction::Fraction() {
  numerator = 0;
  denominator = 0;
}

Fraction::Fraction(int numer, int denom) {
  numerator = numer;
  denominator = denom;
  this->reduce();
}

// a) sum
Fraction operator+(Fraction lhs, const Fraction& rhs) {
  // do stuff
}

// b) subtract
Fraction operator-(Fraction lhs, const Fraction& rhs) {
  // do stuff
}

Fraction operator*(Fraction lhs, const Fraction& rhs) {
  int newNum = lhs.numerator * rhs.numerator;
  int newDen = lhs.denominator * rhs.denominator;
  return Fraction(newNum, newDen);
}

Fraction operator/(Fraction lhs, const Fraction& rhs) {
  int newNum = lhs.numerator * rhs.denominator;
  int newDen = lhs.denominator * rhs.numerator;
  return Fraction(newNum, newDen);
}

bool operator<(const Fraction& lhs, const Fraction& rhs) {
  double lhsValue = lhs.numerator / (double)lhs.denominator;
  double rhsValue = rhs.numerator / (double)rhs.denominator;
  return lhsValue < rhsValue;
}

bool operator>(const Fraction& lhs, const Fraction& rhs) {
  return rhs < lhs;
}

bool operator==(const Fraction& lhs, const Fraction& rhs) {
  return ((lhs.numerator == rhs.numerator) && (lhs.denominator == rhs.denominator));
}

void Fraction::print() {
  std::cout << numerator << "/" << denominator << "\n";
}

// f) print w spaces
void Fraction::print(int) {
  // do stuff
}

// g) print in decimals
void Fraction::printf() {
  // do stuff
}

void Fraction::reduce() {
  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}