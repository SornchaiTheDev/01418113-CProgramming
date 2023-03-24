#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    double money;

public:
    string getName()
    {
        return name;
    }

    string getAge()
    {
        return age;
    }

    double getMoney()
    {
        return money;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void receiveMoney(double amount)
    {
        if (amount > 0)
        {
            money = amount;
        }
    }

    virtual void greeting() = 0;
};

class Male : public Person
{
private:
    double nonHeight;
    string nonColor;

public:
    void setNonHeight(float height) {
        
    }
}

int
main()
{
    Person chokun;
}
