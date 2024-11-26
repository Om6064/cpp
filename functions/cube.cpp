#include <iostream>

using namespace std;

void cube(int); // declaration

int main()//call
{
    int n ;

    cout << "enter the number : ";
    cin >> n;

 

    cube(n);
    
    return 0;
}

void cube(int n) // body
{

    
    int cube;
    cube= n*n*n;

    cout << cube;

    
}