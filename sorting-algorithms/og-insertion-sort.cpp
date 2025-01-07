#include <iostream>
#include <vector>

using namespace std;

void display(vector<int>);
void insertion(vector<int>, int);

int main()
{
    vector<int> arr(5);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }

    display(arr);

    insertion(arr, n);

    return 0;
}
void display(vector<int> arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}
void insertion(vector<int> arr, int n)
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    display(arr);
}
