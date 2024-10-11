#include <iostream>

using namespace std;

int main()
{
    int row, col,sum=0,sum1=0,sum3=0,sum4=0,sum5=0,sum2=0;

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
    for (int k = 0; k < row; k++)
    {
        sum=sum + arr[0][k];
        cout << arr[0][k] << " ";
    }
    cout << sum ;
      cout << endl<< "Second row : ";
    for (int k = 0; k < row; k++)
    {
        sum1=sum1 + arr[1][k];
        cout << arr[1][k] << " ";
    }
     cout << sum1 ;

     cout << endl<< "Third row : ";+-
    for (int k = 0; k < row; k++)
    {
        sum2=sum2 + arr[2][k];
        cout << arr[2][k] << " ";
    }
    cout << sum2 ;
   
    




    return 0;
}