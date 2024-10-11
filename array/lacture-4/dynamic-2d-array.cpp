#include <iostream>

using namespace std;

int main()
{
    int row, col;

    cout << "enter the value of row : ";
    cin >> row;

    cout << "enter the value of column : ";
    cin >> col;

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the valure of postion : [" << i <<"]"<<"["<<j<<"] : ";
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
    

    return 0;
}