#include <iostream>
#include <vector>

using namespace std;
class Sort
{
public:
    void display(vector<int> &arr)
    {
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    void bubble(vector<int> &arr, int size)
    {
        bool flag;

        for (int i = 0; i < (size - 1); i++)
        {
            flag = false;
            for (int j = 0; j < (size - i - 1); j++)
            {

                if (arr[j] > arr[j + 1])
                {
                    arr[j] = arr[j] + arr[j + 1];
                    arr[j + 1] = arr[j] - arr[j + 1];
                    arr[j] = arr[j] - arr[j + 1];
                    flag = true;
                }
            }
            if (flag == false)
            {
                break;
            }
        }
        display(arr);
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
            arr[j + 1] = key;
        }
        display(arr);
    }
    void selectionsort(vector<int> arr, int n)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            int minIdx = i;
            for (int j = (i + 1); j < n; j++)
            {
                if (arr[minIdx] > arr[j])
                {
                    minIdx = j;
                }
            }
            if (minIdx != i)
            {
                arr[i] = arr[i] + arr[minIdx];
                arr[minIdx] = arr[i] - arr[minIdx];
                arr[i] = arr[i] - arr[minIdx];
            }
        }
        display(arr);
    }
    void mergeSort(vector<int> &arr, int low, int high)
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

        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
};

int main()
{
    int size;
    cout << "Enter Size : ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }
    Sort s1;
    int choice;
    do
    {
        cout << "Enter 1 for bubble Sort : "<<endl;
        cout << "Enter 2 for insertion Sort : "<<endl;
        cout << "Enter 3 for selection Sort : "<<endl;
        cout << "Enter 4 for merge Sort : "<<endl;
        cout << "Enter 5 for Quik Sort : "<<endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            s1.bubble(arr, size);
            break;
        }
        case 2:
        {
            s1.insertion(arr, size);
            break;
        }
        case 3:
        {
            s1.selectionsort(arr, size);
            break;
        }
        case 4:
        {
            s1.mergeSort(arr, 0, size - 1); // Proper call to mergeSort
            s1.display(arr);
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }

        default:
            break;
        }
    } while (choice != 6);

    return 0;
}