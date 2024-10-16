#include <iostream>

using namespace std;

int main()
{
    int i, size, year = 0;

    cout << "Enter Number = ";
    cin >> size;

    int x[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter Index Value of " << i << " : ";
        cin >> x[i];
    }

    for (i = 0; i < size; i++)
    {
        if ((x[i] % 4 == 0) and (x[i] % 100 != 0 or (x[i] % 400 == 0)))
        {
            year++;
        }
    }
    cout << year;

    return 0;
}