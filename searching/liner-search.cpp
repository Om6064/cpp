#include <iostream>
#include <vector>

using namespace std;

int LinerSearch(vector<int>, int, int);

int main()
{
    int size, key, idx;
    cout << "Enter Size : ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element : ";
        cin >> arr[i];
    }
    cout << "Enter Element You Want To search : ";
    cin >> key;
    idx = LinerSearch(arr, key, size);
    if (idx != -1)
    {
        cout << "Yayy ! Element is Found In Idx : " << idx << " " << endl;
    }
    else
    {
        cout << "oops ! Element is not Found " << endl;
    }

    return 0;
}
int LinerSearch(vector<int> arr, int key, int size)
{
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            idx = i;
            break;
        }
    }
    return idx;
}