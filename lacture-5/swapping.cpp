#include<iostream>

using namespace std;

int main(){
int a=10,b=20,temp;

cout << "Before value of a is :"<< a <<endl;
cout << "Before value of b is :"<< b <<endl;


temp=a;
a=b;
b=temp;

cout << "After value of a is :"<< a <<endl;
cout << "After value of b is :"<< b <<endl;

    return 0;
}