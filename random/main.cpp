#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 6, 8, 5, 4, 2, 1, 3};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    selectionSort(arr, 10);
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}