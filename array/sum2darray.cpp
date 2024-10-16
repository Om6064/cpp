#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;
    int array[row][col];
    int array2[row][col];
    cout << "Enter values of array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter for " << i << j << " : ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter values for 2nd array" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter for " << i << j << " : ";
            cin >> array2[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Your 3rd array is : " << endl;
    int array3[row][col] = {};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array3[i][j] = array[i][j] + array2[i][j];
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}