#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char buffer[100];
    string name;
    float salary = 0.0, bonus = 0.0;
    cin >> name;
    cin >> salary;
    for (int i = 0; i < 12; i++)
    {
        float amount;
        cin >> amount;
        bonus += amount * 15 / 100;
    }
    sprintf(buffer, "%s %.2f", name.c_str(), salary * 12 + bonus);
    cout << buffer;
    return 0;
}