#include<iostream>

using namespace std;

int main(){
    int a=10,b=20;

    cout << "Before : value of a is "<< a<< " value of b is "<< b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

      cout << "After : value of a is "<< a<< " value of b is "<< b<<endl;

    return 0;
}