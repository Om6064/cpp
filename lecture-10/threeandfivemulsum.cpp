#include<iostream>
 
using namespace std;
 
int main(){
 int num,sum=0;

 cout << "enter any number";
 cin >> num;

 for (int i = 0; i < num; i++)
 {
    if (i % 3 == 0 || i % 5 == 0)
    {
        sum = sum + i;
    }
    
 }
 cout << sum;
 
    return 0;
}