#include <iostream>

using namespace std;

int main()
{
  int choise, size, idx = 0;

  cout << "enter the size of an array : ";
  cin >> size;

  int arr[size];

  do
  {
    cout << endl
         << "enter the choise : ";
    cin >> choise;
    switch (choise)
    {
    case 1:
      if (idx >= size)
      {
        cout << "array overflow......." << endl;
        break;
      }
      int value;

      cout << "enter the value of insertion : ";
      cin >> value;

      arr[idx] = value;
      idx++;
      break;
    case 2:
      for (int val : arr)
      {
        cout << val << endl;
      }
      break;
    case 3:
    int index,value;

    cout << "enter the index you wanna change";
    cin >> index;

    cout << "enter the value you wanna change";
    cin >> value;

    arr[index]=value;
    cout << "updated value is : "<< value;
      break;
    case 4:
    
      if (idx <= 0)
      {
        cout << "Array is null";
        break;
      }

      int v;
      idx--;
      cout << idx;
      v = arr[idx];
      arr[idx] = 0;

      cout << " deleted element is " << v << endl;
      break;
    case 5:
      cout << "ABHARRR....";
      break;

    default:
      cout << "enter the valid input ";
      break;
    }
  } while (choise != 5);

  return 0;
}

// create --
// read --
// update
// delete