#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> arr);
void mergeSort(vector<int>&, int, int);
void merge(vector<int>&, int, int, int);

int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value :- ";
        cin >> arr[i];
    }
    display(arr);
    mergeSort(arr, 0, n - 1);
    display(arr);

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
void mergeSort(vector<int>& arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = (mid + 1);

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high ; i++)
    {
        arr[i] = temp[i - low];
    }
    
}