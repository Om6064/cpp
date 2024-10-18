#include <iostream>

using namespace std;

void div35(int); // declaration

int main()
{
    int n ;

    cout << "enter the number : ";
    cin >> n;

 

    div35(n);
    
    return 0;
}

void div35(int n)
{

    
  if (n%3==0 || n%5==0)
  {
     cout << "it is dividable";
  }else{
    cout << "it is not divadable";
  }
  

   

    
}