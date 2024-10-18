#include <iostream>

using namespace std;

void power(int, int); // declaration

int main()
{
    int n, p;

    cout << "enter the number : ";
    cin >> n;

    cout << "enter the power : ";
    cin >> p;

    power(n,p);
    
    return 0;
}

void power(int n, int p)
{

    int mul=1;

    for (int i = 0; i < p; i++)
    {
        mul = mul * n;
    }
    cout << mul;

    
}