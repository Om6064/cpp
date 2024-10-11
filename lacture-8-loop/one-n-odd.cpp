#include<iostream>
 
using namespace std;
 
int main(){
 int num;
 int i=1;

  cout << "Enter the number : ";
  cin >> num;
  
  for (int i = 1; i <= num; i++)
  {
    if (i % 2 != 0)
    {
    if (i % 3 == 0) cout << endl;
     cout << i << "\t";
    }
    
    
   

    
    
  }

    return 0;
}

