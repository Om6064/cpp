#include<iostream>
 
using namespace std;
 
int main(){
 int year,result;

 cout << "enter the year";
 cin >> year;

 (year % 4 == 0) && (year % 100 !=0 || year % 400 == 0) ? cout << "it is a leap year" : cout <<"ita ia a not leap year";
    return 0;
}

// (year % 2 == 0)? (year % 100 !=0 || year % 400 == 0) ?leap year :not leapyear :not leapyear