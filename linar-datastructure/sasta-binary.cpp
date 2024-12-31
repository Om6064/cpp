#include<iostream>
#include<stack>

using namespace std;

int main(){
stack<int> s1;
int n;

cout << "Enter your Number : ";
cin >> n;

while (n > 0)
{
   int r = n%2;
   s1.push(r);
   n = n/2;
}

 while(!s1.empty()){
    cout<<s1.top();
    s1.pop();
 }


    return 0;
}