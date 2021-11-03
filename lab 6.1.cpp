#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int Counting(int* a, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (abs(a[i]) % 2 != 0 && abs(i % 13 != 0))
        {
            count++;
        }
     }
    return count;
}
void NewMas(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        if (abs(a[i]) % 2 != 0 && abs(i % 13 != 0))
            a[i] = 0;
}
int Sum(int *a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (abs(a[i]) % 2 != 0 && abs(i  % 13 != 0))
            S += a[i];
    return S;   
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int a[n];

    int Low = 15;
    int High = 94;

    Create(a, n, Low, High);
    Print(a, n);

    cout << endl;
    cout << "Sum      =   " << Sum(a, n) << endl;
    cout << "Counting =   " << Counting(a, n) << endl;
    cout << endl;

    NewMas(a, n);
    Print(a, n);

    return 0;
}