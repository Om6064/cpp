#include<iostream>
 
using namespace std;
 
int main(){
 int x,y,choise;

 do{
    cout << "Enter 1 for (+)\n Enter 2 for (-)\n Enter 3 for (*)\n Enter 4 for (/)\n Enter 5 for Exit" << endl;

    cout << "enter the value of X and Y" << endl;
    cin >> x >> y;

    cout << "enter your choice" << endl;
    cin >> choise;

    switch (choise)
    {
    case 1:
      cout << "Addision : is :"<< x+y << endl;
      break;
    case 2:
      cout << "Subtracion : is :"<< x-y << endl;
      break;
    case 3:
      cout << "Multipication : is :"<< x*y << endl;
      break;
    case 4:
      cout << "Divistion : is :"<< x/y << endl;
      break;
    case 5:
      cout << "Thank you Visit Again......" << endl;
      break;
    
    default:
      cout << "OOPS! Your choise is invalid" << endl;
      break;
    }
 }while(choise != 5);
    return 0;
}