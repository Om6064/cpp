#include <iostream>

using namespace std;

int main()
{
    int size, i, j;
    bool flag = true;

    cout << "Enter Size of Array = ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value : " << i << " ";
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {
        flag = true;
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}