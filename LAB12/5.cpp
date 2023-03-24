#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation

{
private:
    double distance;

public:
    void setDistance(double distance)
    {
        this->distance = distance;
    }

    double fare()
    {
        int start = 35;
        return start + (distance * 2);
    }
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

class BTS : public Transportation
{
private:
    int station_amount;

public:
    void setStation(int amount)
    {
        station_amount = amount;
    }
    double fare()
    {
        int start = 15;
        return 15 + (station_amount * 5);
    }
};

class Passenger
{
private:
    double cost;

public:
    void addTrasportation(Transportation &type)
    {
        cost += type.fare();
    }

    double getTotalFare()
    {
        return cost;
    }
};

int main()
{
    Passenger passenger;
    while (1)
    {
        char transportType;
        cin >> transportType;
        if (transportType == 'A')
        {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTrasportation(*taxi);
        }
        else if (transportType == 'B')
        {
            BmtaBus *bus = new BmtaBus();
            passenger.addTrasportation(*bus);
        }
        else if (transportType == 'C')
        {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTrasportation(*bts);
        }
        else
        {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}