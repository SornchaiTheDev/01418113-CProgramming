#include <iostream>
using namespace std;

class Rectangle {
public :
  double width;
  double length;
  void changeSize(double size) {
       width += size;
       length += size;
    }

    void changeSize(double _width , double _length) {
      width += _width;
      length += _length;
    }
};

int main() {
  Rectangle r;
  cout << "Enter Rectangle Width & Length : ";
  cin >> r.width >> r.length;
  r.changeSize(100 , 1);
  cout << "Size : " << r.width << "x" << r.length;
  return 0;
}