#include<iostream>
 
using namespace std;
 
int main(){
 int n,sum=0;

 cout << "enter your number";
 cin >> n;

 for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
    {
        sum += i ;
    }
    
 }

 cout << "even num sum is  : "<<sum; 
 
    return 0;
}