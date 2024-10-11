#include <iostream>

using namespace std;

int main()
{
   int size, year, count = 0;

   cout << "Enter the size : ";
   cin >> size;
   int arr[size];

   for (int i = 0; i < size; i++)
   {
      cout << "enter the Values : ";
      cin >> arr[i];
   }
   for (int i = 0; i < size; i++)
   {

      if ((arr[i] % 4 == 0) && (arr[i] % 100 != 0 || arr[i] % 400 == 0))
      {
         count++;
      }
   }
   cout << count++;

   return 0;
}