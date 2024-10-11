#include <iostream>

using namespace std;

int main()
{

   int p, size;

   cout << "enter the size";
   cin >> size;

   int arr[size];

   for (int i = 0; i < size; i++)
   {
      cout << "enter the value at " << i << " : ";
      cin >> arr[i];
   }

   cout << "enter the postion";
   cin >> p;

   if (p >= size)
   {
      cout << "it's a invalid value";
      return 0;
   }
   else
   {
      for (int i = p; i < size; i++)
      {

         cout << arr[i] << endl;
      }

      for (int i = 0; i < p; i++)
      {
         cout << arr[i] << endl;
      }
   }

   return 0;
}