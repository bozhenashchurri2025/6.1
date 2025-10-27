#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] > 0 || a[i] % 3 != 0)
        {
            cout << setw(5) << a[i];
        }
        Print(a, size, i + 1);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 22;
    int a[n];
    int Low = -10;
    int High = 35;

    Create(a, n, Low, High, 0);

    cout << "Елементи масиву:" << endl;
    Print(a, n, 0);
    cout << endl;

    return 0;
}# 6.1
