#include<iostream>

using namespace std;

int main(){
    int a=10,b=20,c=30;

    cout << (a == b) << endl; // false

    cout << (a <= b) << endl; //true

    cout << (a >= b) << endl; //false

    cout << (a < b  && b < c) << endl;  //true

    cout << (b < a && c < b) << endl; //false

    //unary

    cout << "Before value of a is" << a << endl;

    a++;

    cout << "After value of a is" << a << endl; //unary oprater

    //short hand
   cout << "Before value of a is" << a << endl;

    a*=5 ;

    cout << "After value of a is" << a << endl;

    return 0;
}