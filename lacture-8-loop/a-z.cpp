#include<iostream>
 
using namespace std;
 
int main(){
 

 for (char i = 'A'; i <= 'Z'; i++)
 {
    if (i % 5 == 0) cout << endl;
    cout << i << "\t";
    
    
 }

  for (char i = 'Z'; i >= 'A'; i--)
 {
    if (i % 5 == 0) cout << endl;
    cout << i << "\t";
    
    
 }
 
    return 0;
}