#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void display(vector<int>);
void sort(vector<int> &, int);
int binerySearch(vector<int> &, int, int, int);

int main()
{
    int size,key;
    cout << "Enter size : ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    display(arr);
    sort(arr, size);
    display(arr);
    cout << "Enter Key : ";
    cin >> key;
    int idx =binerySearch(arr,0,size-1,key);

    if (idx == -1)
    {
        cout << "oops ! element is not found .."<<endl;
    }else{
        cout << "yayy! found at index "<<idx<<endl;
    }
    

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
void sort(vector<int> &arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}
int binerySearch(vector<int> &arr, int start, int end, int key)
{
    if (start >= end)
        return -1;

    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }

    else if (arr[mid] > key)
    {
        return binerySearch(arr, start, mid - 1, key);
    }else{
        return binerySearch(arr, mid +1, end, key);
    }
}