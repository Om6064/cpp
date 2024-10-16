#include <iostream>

using namespace std;

int main()
{

    int i, size;

    cout << "Enter Size Of Array = ";
    cin >> size;

    int arr[size];

    for (i = 0; i <= size; i++)
    {
        cout << "Enter First Array " << i << " :";
        cin >> arr[i];
    }
    cout << endl;
    int arr2[size];
    for (i = 0; i <= size; i++)
    {
        cout << "Enter Second Array " << i << " :";
        cin >> arr2[i];
    }
    cout << endl;

    int arr3[size];

    for (i = 0; i <= size; i++)
    {
        arr3[i] = arr[size] + arr2[size];
        cout << "Your Sum Of Array is " << i << " :" << arr3[i] << endl;
    }
    return 0;
}