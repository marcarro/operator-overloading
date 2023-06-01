#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
  Fraction();
  Fraction(int, int);
  friend Fraction operator+(Fraction lhs, const Fraction& rhs);
  friend Fraction operator-(Fraction lhs, const Fraction& rhs);
  friend Fraction operator*(Fraction lhs, const Fraction& rhs);
  friend Fraction operator/(Fraction lhs, const Fraction& rhs);
  friend bool operator<(const Fraction& lhs, const Fraction& rhs);
  friend bool operator>(const Fraction& lhs, const Fraction& rhs);
  friend bool operator==(const Fraction& lhs, const Fraction& rhs);
  void print();
  void print(int);
  void printf();
private:
  int numerator, denominator;
};

Fraction operator+(Fraction lhs, const Fraction& rhs);
Fraction operator-(Fraction lhs, const Fraction& rhs);
Fraction operator*(Fraction lhs, const Fraction& rhs);
Fraction operator/(Fraction lhs, const Fraction& rhs);
bool operator<(const Fraction& lhs, const Fraction& rhs);
bool operator>(const Fraction& lhs, const Fraction& rhs);
bool operator==(const Fraction& lhs, const Fraction& rhs);

#endif