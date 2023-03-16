#include <iostream>
using namespace std;

class Animal
{
private:
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

int main()
{
    Animal monkey(-100, 200, 200);

    while (true)
    {
        string input = "";
        cin >> input;
        if (input == "q")
        {
            break;
        }

        if (input == "e")
        {
            int amount;
            cin >> amount;
            monkey.eat(amount);
        }

        else if (input == "p")
        {
            int amount;
            cin >> amount;
            monkey.play(amount);
        }
        else if (input == "s")
        {
            int amount;
            cin >> amount;
            monkey.sleep(amount);
        }
        else if (input == "print")
        {
            ;
        }
        else
        {
            continue;
        }
        cout << "Your fullness is " << monkey.getFullness() << " Your Energy is " << monkey.getEnergy() << " Your Happiness is " << monkey.getHappiness() << endl;
    }
}