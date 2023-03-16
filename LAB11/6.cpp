#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();

public:
    Animal(int happiness, int energy, int fullness);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int food);
    void play(int hour);
    void sleep(int hour);
};

Animal::Animal(int happiness, int energy, int fullness) : happiness(happiness), energy(energy), fullness(fullness)
{
    limitStat();
}

int Animal::getHappiness()
{
    return happiness;
}

int Animal::getEnergy()
{
    return energy;
}

int Animal::getFullness()
{
    return fullness;
}

void Animal::limitStat()
{
    if (happiness < 0)
    {
        happiness = 0;
    }
    else if (happiness > MAX_HAPPINESS)
    {
        happiness = MAX_HAPPINESS;
    }

    if (energy < 0)
    {
        energy = 0;
    }

    else if (energy > MAX_ENERGY)
    {
        energy = MAX_ENERGY;
    }
    if (fullness < 0)
    {
        fullness = 0;
    }
    else if (fullness > MAX_FULLNESS)
    {
        fullness = MAX_FULLNESS;
    }
}

void Animal::eat(int food)
{
    if (food > 0)
    {
        if (fullness + food > MAX_FULLNESS)
        {
            happiness -= 10;
        }

        fullness += food;
        limitStat();
    }
}

void Animal::play(int hour)
{
    if ((energy != 0 || fullness != 0) && hour > 0)
    {
        energy -= 10 * hour;
        fullness -= 20 * hour;
        happiness += 5 * hour;
        limitStat();
    }
}

void Animal::sleep(int hour)
{
    if (hour > 0)
    {
        energy += 10 * hour;
        fullness -= 10 * hour;
        limitStat();
    }
}

class Bird : public Animal
{
public:
    Bird(int happiness, int energy, int fullness);
    void fly(int hour);
    void sing();
};

Bird::Bird(int happiness, int energy, int fullness) : Animal(happiness, energy, fullness) {}

void Bird::fly(int hour)
{
    if (hour > 0)
    {
        energy -= 5 * hour;
    }
    limitStat();
}

void Bird::sing()
{
    happiness += 5;
    limitStat();
}

class Pet
{
protected:
    string name;

public:
    Pet(string name);
    string getName();
    void setName(string);
};

Pet::Pet(string name)
{
    this->name = name;
}

string Pet::getName()
{
    return name;
}

void Pet::setName(string name)
{
    this->name = name;
}

class OwnedBird : public Bird, public Pet

{
public:
    OwnedBird(string name, int happiness, int energy, int fullness);
};

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness) : Pet(name), Bird(happiness, energy, fullness) {}

int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    cout << "Your pet name is " << animal.getName()
         << " his/her happiness is " << animal.getHappiness()
         << ". his/her energy is " << animal.getEnergy()
         << " . his/her fullness is " << animal.getFullness() << endl;

    while (1)
    {
        cin >> action;
        if (action == 'q')
            break;
        cin >> hour;
        switch (action)
        {
        case 'e':
            animal.eat(hour);
            break;
        case 'p':
            animal.play(hour);
            break;
        case 's':
            animal.sleep(hour);
            break;
        case 'f':
            animal.fly(hour);
            break;
        case 'i':
            for (int i = 0; i < hour; i++)
                animal.sing();
            break;
        case 'n':
            if (hour < 5)
                animal.setName("Debby");
            else
                animal.setName("Shogun");
            break;
        }

         cout << "Your pet name is " << animal.getName()
         << " his/her happiness is " << animal.getHappiness()
         << ". his/her energy is " << animal.getEnergy()
         << " . his/her fullness is " << animal.getFullness() << endl;
         
    }
}
