#include <iostream>
#include <vector>

using namespace std;
void display(vector<int>);
void selectionsort(vector<int>, int);

int main()
{
    vector<int> arr(6);
    int n = arr.size();
    for (int i = 0; i < n ; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }
    display(arr);
    selectionsort(arr,n);

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
void selectionsort(vector<int> arr,int n){
    for (int i = 0; i < (n-1);i++)
    {
        int minIdx = i;
        for (int j = (i+1); j < n; j++)
        {
            if (arr[minIdx] > arr[j])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            arr[i]  = arr[i] + arr[minIdx];
            arr[minIdx] = arr[i] - arr[minIdx];
            arr[i] =  arr[i] - arr[minIdx];
        }
        
        
    }
    display(arr);
    
}
