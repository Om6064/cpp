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
    cout << endl;

   
    for (int k = 0; k < col; k++)
    {
        cout << arr[k][k] << " ";
    }
    cout << endl;
  
    for (int k = 0; k < col; k++)
    {
        cout << arr[k][row - 1 -k] << " ";
    }
    
    




    return 0;
}