#include<iostream>
 
using namespace std;
 
int main(){
 int n,fa=1;

 cout << "enter your number";
 cin >> n;

 for (int i = 1; i <= n; i++) fa = fa * i;

 cout << "your num factorial is  : "<<fa; 
 
    return 0;
}