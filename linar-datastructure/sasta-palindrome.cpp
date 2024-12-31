#include<iostream>
#include<stack>

using namespace std;

bool palindrome(string str){
    stack<char> s1;
    for (char ch : str)
    {
       s1.push(ch);
    }
       for (char ch : str)
    {
        if (s1.top() != ch)
        {
           return false;
        }
        s1.pop();
        
    }
    return true;
    
    
}

int main(){

string n;

cout << "Enter your  string: ";
cin >> n;


if (palindrome(n))
{
    cout << "Palindrome : ";
}else
{
    cout << "bye ! bye! ";
}






    return 0;
}