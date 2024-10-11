#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "enter the size of an array";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value of an array";
        cin >> arr[i];
    }

    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value of an array";
        cin >> arr1[i];
    }

    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        arr2[i]=arr[i]+arr1[i];

        cout <<arr[i] <<" + "<<arr1[i]<<" = " << arr2[i] << endl;
    }
    return 0;
}