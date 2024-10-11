#include<iostream>
 
using namespace std;
 
int main(){
 int num,count=0;
 bool flag=true;

 cout << "enter a number";
 cin >> num;

 for (int i = 2; i*i < num; i++)
 {
    if (num % i == 0)
    {
        cout << "its a not prime number";
        
        return 0;
    }
    count++;
    
 }
 cout << count <<endl;
 
 if (flag)
 {
    cout << "its a prime number";
    count++;
 }
 
 
    return 0;
}