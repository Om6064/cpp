#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;
    if (row != col)
    {
        cout << "Please select matrix values";
        return 0;
    }

    int array[row][col];
    cout << "Enter values for your array : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value : ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        cout << array[i][i] << "  ";
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        cout << array[i][col - 1 - i] << "  ";
    }

    return 0;
}