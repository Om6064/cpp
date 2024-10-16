#include <iostream>

using namespace std;

int main()
{
    int size, choice, idx = 0;

    cout << "Enter size of Array : ";
    cin >> size;

    int arr[size];

    do
    {
        cout << "\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (idx >= size)
            {
                cout << "Array is Overflow .... " << endl;
                break;
            }
            int value;

            cout << "Enter Value : ";
            cin >> value;

            arr[idx] = value;
            idx++;
            break;
        case 2:
            for (int val : arr)
            {
                cout << val << " ";
            }
            break;
        case 3:
            int index, update;
            cout << "Enter Your Index you want to change : ";
            cin >> index;
            cout << "Enter Number to update : ";
            cin >> update;

            arr[index] = update;

            break;
        case 4:

            if (idx == 0)
            {
                cout << "Exit";
                break;
            }
            int v;
            idx--;
            v = arr[idx];
            arr[idx] = 0;

            cout << "Delete Element : " << v;
            break;
        }
    } while (choice != 5);

    return 0;
}