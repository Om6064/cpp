#include <iostream>

using namespace std;

int main()
{
    int row, col;

    cout << "Enter the row : ";
    cin >> row;

    cout << "Enter rhe cols : ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the valure of postion : [" << i << "]" << "[" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl<< "First row : ";
    for (int k = 0; k < col; k++)
    {
        cout << arr[0][k] << " ";
    }
    cout << endl<< "Last row : ";
    for (int k = 0; k < col; k++)
    {
        cout << arr[row-1][k] << " ";
    }
    cout << endl<< "First col : ";
    for (int k = 0; k < row; k++)
    {
        cout << arr[k][0] << " ";
    }
    cout << endl<< "Last col : ";
    for (int k = 0; k < row; k++)
    {
        cout << arr[k][col-1] << " ";
    }
    




    return 0;
}