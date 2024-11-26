#include<iostream>
 
using namespace std;
 
int main(){
 int a = 5;

 int *ptr = &a; //ampersand
 int **doubleptr = &ptr;

 cout << &a<<" "<<&ptr<<" "<<ptr<<" "<<doubleptr<<" "<<&doubleptr <<" "<< *doubleptr; //* dereference operator
    return 0;
}