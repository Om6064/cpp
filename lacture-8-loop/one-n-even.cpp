#include<iostream>
 
using namespace std;
 
int main(){
 int num;
 int i=1;

  cout << "Enter the number : ";
  cin >> num;
  
  for (int i = 1; i <= num; i++)
  {
    if (i % 2 == 0)
    {
     cout << i << "\t";
    if (i % 10 == 0) cout << endl;
    }
    
    
   

    
    
  }

    return 0;
}

