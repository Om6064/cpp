#include <iostream>

using namespace std;

int main()
{
    int size, p, k = 0;

    cout << "Enter Size Of Array = ";
    cin >> size;

    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value : " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Enter Position = ";
    cin >> p;
    int arr2[size];
     
    for (int i = p; i < size; i++)
    {
        cout << arr1[i] << " ";
        arr2[k++] = arr1[i];
    }

    for (int i = 0; i < p; i++)
    {
        cout << arr1[i] << " ";
        arr2[k++] = arr1[i];
    }
    cout << endl;
    for (int val : arr2)
    {
        cout << val << " ";
    }

    return 0;
}