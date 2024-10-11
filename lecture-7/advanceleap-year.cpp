#include<iostream>
 
using namespace std;
 
int main(){
 int year;
 cout << "enter a year : ";
 cin >> year;

 if ((year%4 == 0) && (year%100 != 0 || year%400 == 0))
 {
    cout << "your year is leap year";
 }
 else
 {
    cout << "your year is not leap year";


 }
 

 


 return 0;
}