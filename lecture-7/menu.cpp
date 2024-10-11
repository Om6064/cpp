#include <iostream>
 
using namespace std;
 
int main(){
 int choise;
 cout << "press 1 for pav-bhaji\n press 2 for item \n press 3 for rasgulla \n press 4 for jalebi \n press 5 for bill it's mendetary\n";
 cout << "enter your choise";
 cin >>  choise;

 if (choise == 1)
 {
    cout << "your pavbhaji is here";
 }
 else if (choise == 2)
 {
    cout << "your item is here";
    
 }
 else if (choise == 3)
 {
    cout << "your rasgulla is here";
 }
 else if (choise == 4){
    cout << "your jalebi is here";
 }
 else if (choise == 5){
    cout << "your bill is here";
 }
 else {
    cout << "Invalid number";
 }
 
return 0;
}

