#include <iostream>
using namespace std;

class Rectangle {
private :
    char thisisprivate;
public :
    double width , length;

    double Area() {
        return width * length;
    }

    double Perimeter() {
        return 2 * (width + length);
    }

};

int main() {
    Rectangle r1 , r2;

    cout << "Enter Width and Length : " << endl;

    cin >> r1.width >> r1.length
        >> r2.width >> r2.length;


    cout << "Area of r1 is : " << r1.Area() << " "
         << "Perimeter of r1 is : " << r1.Perimeter() << endl;
    cout << "Area of r2 is : " << r2.Area() << " "
         << "Perimeter of r2 is : " << r2.Perimeter() << endl;

}