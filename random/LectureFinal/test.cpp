#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

// class Group
// {
// private:
//     Person **persons;

// public:
//     Group()
//     {
//         persons = new Person * [10];
//     }

//     void addPerson(string name, int age)
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             if (persons[i] == NULL)
//             {
//                 persons[i] = new Person(name, age);
//             }
//         }
//     }

//     string getFirst()
//     {
//         return persons[0]->getName();
//     }
// };

int main()
{

    cout << test->getName();
    return 0;
}
