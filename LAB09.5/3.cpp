#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int people;
    cin >> people;
    int prisoners[people];
    for (int i = 0; i <= people; i++)
    {
        int value;
        cin >> value;
        prisoners[i] = value;
    }

    int len = sizeof(prisoners) / sizeof(prisoners[0]);
    sort(prisoners, prisoners + len);

    int even[100] = {0}, odd[100] = {}, odd_count = 0, even_count = 0;
    int index = 0;
    for (int j = 1; j <= prisoners[len - 1]; j++)
    {
        if (index > len)
            break;
        if (j != prisoners[index])
        {
            if (j % 2 == 0)
            {
                even[even_count] = j;
                even_count++;
            }
            else
            {
                odd[odd_count] = j;
                odd_count++;
            }
            continue;
        }
        index++;
    }

    for (int i = 0; i < odd_count; i++)
    {
        cout << odd[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < even_count; i++)
    {
        cout << even[i] << " ";
    }

    return 0;
}