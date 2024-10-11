#include<iostream>
 
using namespace std;
 
int main(){
 int num;
 int i=1;

  cout << "Enter the number : ";
  cin >> num;
  
//   for (int i = 1; i <= num; i++)
//   {
//     cout << i << "\t";
//   }


// with while
while (i <= num)
{
   cout << i << "\t";
   if (i % 10 == 0) cout << endl ;
   i++;
   
   
}
while (i >= 2)
{
   i--;
   if (i % 3 == 0) cout << endl ;
   cout << i << "\t";
   
   
}
  
    return 0;
}




