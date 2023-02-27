#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num--;
        }
        count++;
    }
    cout << count;
}