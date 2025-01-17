#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &arr);
void quickSort(vector<int> &arr, int start, int end);
int partition(vector<int> &arr, int start, int end);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    display(arr);

    quickSort(arr, 0, size - 1);

    cout << "Sorted Array: ";
    display(arr);

    return 0;
}

void display(vector<int> &arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int pivotIndex = partition(arr, start, end); // Partition the array

    quickSort(arr, start, pivotIndex - 1);       // Recursively sort the left part
    quickSort(arr, pivotIndex + 1, end);         // Recursively sort the right part
}

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start]; // Use the first element as the pivot
    int count=0,temp;      // Start scanning from the next element

    for (int i = start; i <= end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

   int pivotIdx = start+count;
  temp = arr[pivotIdx];
  arr[pivotIdx] = arr[start];
  arr[start] = temp;
  int i = start;
  int j = end;
  while (i < pivotIdx && j > pivotIdx)
  {
    while (arr[i] < pivot)
    {
        i++;
    }
    while (arr[j] > pivot)
    {
        j--;
    }
    if (i < pivotIdx && j > pivotIdx)
    {
        temp =  arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    
    
    
  }
  
    return pivotIdx;                 
}
