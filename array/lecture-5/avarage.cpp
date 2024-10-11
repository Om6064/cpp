#include <iostream>

using namespace std;

int main()
{
    int row, col,sum=0;

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
            sum = sum + arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "avg is " << (float)sum/(row * col) << " ";




    return 0;
}