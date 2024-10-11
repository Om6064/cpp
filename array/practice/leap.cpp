#include <iostream>

using namespace std;

int main()
{
    int size, count = 0;

    cout << "enter the size of the array";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value of an array";
        cin >> arr[i];

        if (arr[i] % 4 == 0 && (arr[i] % 100 != 0 || arr[i] % 400 == 0))
        {
            count++;
        }
    }
    cout << count;

    return 0;
}