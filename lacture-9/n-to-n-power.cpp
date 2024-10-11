#include<iostream>
 
using namespace std;
 
int main(){
 int num, power, ans = 1;

 cout << "enter your num";
 cin >> num;

 cout << "enter your power";
 cin >> power;

 for (int i = 1; i <= power; i++)
 {
    ans = ans * num;
 }
 
 cout << "your expected output is : "<<ans;
 
    return 0;
}