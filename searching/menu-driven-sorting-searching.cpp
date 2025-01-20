#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
class SortSearch
{
public:
    void display(vector<int> arr)
    {
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    void bubble(vector<int> arr, int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j + 1] < arr[j])
                {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        display(arr);
    }
    void insertion(vector<int> arr, int size)
    {
        for (int i = 1; i < size; i++)
        {
            int key = arr[i];
            int prev = (i - 1);
            while (prev >= 0 && arr[prev] >= key)
            {
                arr[prev + 1] = arr[prev];
                prev--;
            }
            arr[prev + 1] = key;
        }
        display(arr);
    }
    void selection(vector<int> arr, int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < size - 1; j++)
            {
                if (arr[minIdx] > arr[j])
                {
                    minIdx = j;
                }
            }
            if (minIdx != i)
            {
                int temp = arr[minIdx];
                arr[minIdx] = arr[i];
                arr[i] = temp;
            }
        }
        display(arr);
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
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (high + low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    void quick(vector<int> &arr, int low, int high)
    {
        if (low > high)
            return;

        int idx = partation(arr, low, high);
        quick(arr, low, idx - 1);
        quick(arr, idx + 1, high);
    }
    int partation(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low], count = 0, temp;
        for (int i = low; i <= high; i++)
        {
            if (pivot > arr[i])
            {
                count++;
            }
        }
        int pivotIndex = low + count;
        temp = arr[pivotIndex];
        arr[pivotIndex] = arr[low];
        arr[low] = temp;
        int i = low;
        int j = high;

        while (i < pivotIndex && j > pivotIndex)
        {
            while (pivot > arr[i])
            {
                i++;
            }
            while (pivot < arr[j])
            {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    }

    void liner(vector<int> arr, int size, int key)
    {
        int idx = -1;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                idx = i;
            }
        }
        if (idx == -1)
        {
            cout << "oops ! " << endl;
        }
        else
        {
            cout << "yahh ! " << endl;
        }
    }
    int bineray(vector<int> arr, int low, int high, int key)
    {
        if (low > high)
            return -1;

        int mid = (high + low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return bineray(arr, low, mid - 1, key);
        }
        else
        {
            return bineray(arr, mid + 1, high, key);
        }
    }
};
int main()
{
    SortSearch s1;
    int size, choice;
    cout << "Enter Size : ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    do
    {
        cout << "Enter 1 For bubble sort : " << endl;
        cout << "Enter 2 For insertion sort : " << endl;
        cout << "Enter 3 For selection sort : " << endl;
        cout << "Enter 4 For merge sort : " << endl;
        cout << "Enter 5 For quick sort : " << endl;
        cout << "Enter 6 For liner search : " << endl;
        cout << "Enter 7 For biner search : " << endl;
        cout << "Enter 8 For Exit : " << endl;
        cout << "Enter choice  : " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            s1.bubble(arr, size);
            break;
        }
        case 2:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            s1.insertion(arr, size);
            break;
        }
        case 3:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            s1.selection(arr, size);
            break;
        }
        case 4:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            s1.mergeSort(arr, 0, size - 1);
            s1.display(arr);
            break;
        }
        case 5:
        {
            cout << "Before : " << endl;
            s1.display(arr);
            s1.quick(arr, 0, size - 1);
            s1.display(arr);
            break;
        }
        case 6:
        {
            s1.display(arr);
            int key;
            cout << " enter key : ";
            cin >> key;
            s1.liner(arr, size, key);
            break;
        }
        case 7:
        {
            s1.bubble(arr, size);
            int key,idx;
            cout << " enter key : ";
            cin >> key;
             idx = s1.bineray(arr, 0, size - 1, key);
            if (idx == -1)
            {
                cout << "oops ! " << endl;
            }
            else
            {
                cout << "yahh ! " << endl;
            }

            break;
        }
        case 8:
        {
            break;
        }

        default:
            break;
        }
    } while (choice != 8);

    return 0;
}