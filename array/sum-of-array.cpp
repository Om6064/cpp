#include <iostream>

using namespace std;

int main()
{
    int i, size;

    cout << "Size Of Array : ";
    cin >> size; //

    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter Number Array 1 : ";
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "index : " << i << " = " << arr[i] << endl;
    }
    // array 2
    int arr2[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter Number Array 2 : ";
        cin >> arr2[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "index : " << i << " = " << arr2[i] << endl;
    }
    // array 3
    int arr3[size];
    for (i = 0; i < size; i++)
    {
        arr3[i] = arr[i] + arr2[i];
        cout << "your array 3 index : " << i << " = " << arr3[i] << endl;
    }

    return 0;
}
