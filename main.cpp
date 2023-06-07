#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
  Fraction f1(1,2);
  Fraction f2(4,2);
    
    //prints the two fractions created
  f1.print(), f2.print();

  Fraction f3 = f1 / f2;
  Fraction f4 = f1 * f2;
  Fraction f5 = f1 + f2;
  Fraction f6 = f1 - f2;

    //prints the division
    f3.print();
     //prints the multiplication
    f4.print();
     //prints the sum
    f5.print();
     //prints the substraction
    f6.print();
     //prints the fraction in decimals
    f1.printf();
     //prints the fractions with spaces in between
    f1.print(4);
      
    
//prints the values 0 or 1 depending if the expression its true or false
  bool bigger = f1 > f2;
  bool smaller = f1 < f2;
  bool equal = f1 == f2;
  cout << bigger << " " <<  smaller << " " << equal << "\n";
}
