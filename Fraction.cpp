#include "Fraction.h"
#include <numeric>
#include <iostream>
#include <string>

Fraction::Fraction() {
  numerator = 0;
  denominator = 0;
}

Fraction::Fraction(int numer, int denom) {
  numerator = numer;
  denominator = denom;
  this->reduce();
}

Fraction operator+(Fraction lhs, const Fraction& rhs) {
  int newNum = lhs.numerator* rhs.denominator + rhs.numerator * lhs.denominator;
  int newDen = lhs.denominator * rhs.denominator;
  return Fraction (newNum, newDen);
}

Fraction operator-(Fraction lhs, const Fraction& rhs) {
  int newNum = lhs.numerator* rhs.denominator - rhs.numerator * lhs.denominator;
  int newDen = lhs.denominator * rhs.denominator;
  return Fraction (newNum, newDen);
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

void Fraction::print(int esp) {
  int e = esp/2;
  std :: string spaces (e,' ');
  std :: cout << spaces << numerator << "/" << spaces << denominator << "\n";
}

void Fraction::printf() {
  float decimal = static_cast<float> (numerator)/denominator;
  std::cout << decimal << "\n";
}

void Fraction::reduce() {
  int gcd = std::gcd(numerator, denominator);
  numerator /= gcd;
  denominator /= gcd;
}
