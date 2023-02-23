#include <iostream>
using namespace std;

class Rational {
public:
  int numerator;
  int denominator;

  Rational() {
    numerator = 0;
    denominator = 1;
  }

  Rational(int n) {
    numerator = n;
    denominator = 1;    
  }

  Rational(int n , int d) {
    numerator = n;
    denominator = d;    
  }
};

int main() {
  Rational r0;
  Rational r1(3);
  Rational r2(3,7);

  
  
  return 0;
}