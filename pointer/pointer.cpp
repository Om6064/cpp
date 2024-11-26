#include<iostream>
 
using namespace std;
 
int main(){
 int a = 5;

 int *ptr = &a; //ampersand

 cout << *ptr; //* dereference operator
    return 0;
}