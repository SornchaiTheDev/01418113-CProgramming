#include <iostream>
using namespace std;
class Hero
{
private:
    string name;
    int level;

public:
    Hero(string name, int level)
    {
        this->name = name;
        this->level = level;
    }

    string getName()
    {
        return name;
    }
    int getLevel()
    {
        return level;
    }
};

int main()
{
    string name;
    int level;
    cin >> name >> level;
    Hero yo(name, level);
    cout << yo.getName() << yo.getLevel();
}
