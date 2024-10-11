#include<iostream>
 
using namespace std;
 
int main(){
 int n,sum=0;

 cout << "enter your number";
 cin >> n;

 for (int i = 1; i <= n; i++) sum += i;

 cout << "1 to n sum is : "<<sum; 
 
    return 0;
}