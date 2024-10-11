#include<iostream>
 
using namespace std;
 
int main(){
 int start,end;
 bool flag = true;

 cout << "enter the start and end numbers";
 cin >> start >> end;

 for (int i = start; i <= end; i++)
 {
    flag = true;
    for (int j = 2; j < i; j++)
    {
        if(i % j == 0){
            
            flag = false;
        }
    }
    if (flag)
    {
        cout  << i<< " ";
    }
    
    
 }
 
    return 0;
}