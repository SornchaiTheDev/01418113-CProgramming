#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class BmtaBus : public Transportation

{

public:
    BmtaBus() {}

    double fare()
    {
        return 6.50;
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1)
    {
        BmtaBus bus;
        cout << "BMTA Bus fare: "
             << bus.fare() << endl;
    }
    else if (tc == 2)
    {
        BmtaBus bus;
        Transportation *transport = &bus;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}