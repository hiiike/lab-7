#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void Create(array<int, 100>& arr, int n);
void Print(array<int, 100>& arr, int n);
int IndexOfMaxOddElement(array<int, 100>& arr, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << "Index of max odd element in array: " << IndexOfMaxOddElement(arr, n) << endl;

    return 0;
}

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int IndexOfMaxOddElement(array<int, 100>& arr, int n)
{
    double maxOddElem;
    int maxOddElemIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            maxOddElem = arr[i];
            maxOddElemIndex = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] > maxOddElem)
        {
            maxOddElem = arr[i];
            maxOddElemIndex = i;
        }
    }

    return maxOddElemIndex;
}