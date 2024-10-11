#include<iostream>
 
using namespace std;
 
int main(){
 char d;

 cout << "enter year from char like m for Monday : ";
 cin >> d;

 switch (d)

 {
 case 'm':
    cout << "Monday";
    break;
 case 't':
    cout << "Tuesday";
    break;
 case 'w':
    cout << "Wednusday";
    break;
 case 'T':
    cout << "Thusday";
    break;
 case 'f':
    cout << "Friday";
    break;
 case 's':
    cout << "saturday";
    break;
 case 'S':
    cout << "Sunday";
    break;

 
 default:
    cout << " invalid charecter";
    break;
 }
    return 0;
}