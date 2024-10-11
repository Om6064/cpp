#include <iostream>

using namespace std;

int main()
{
    int size, avg, sum = 0;

    cout << "Enter the size : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the Values : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {

        // cout << arr[i] << endl;
        sum = sum + arr[i];
    }
    avg = sum / size;
    cout << "avarage of array is " << avg;

    return 0;
}