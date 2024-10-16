#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter Array Size : ";
    cin >> size;

    int ar[size];

    for (int i : ar)
    {
        cin >> i;
        cout << " Enter value of index " << i << " : ";
    }

    return 0;
}