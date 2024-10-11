#include<iostream>
 
using namespace std;
 
int main(){
 int size;
 bool flag = true;

 cout << "enter the size of array";
 cin >> size;

 int arr[size];

 for (int i = 0; i < size; i++)
 {
    cout << "enter the value of an array at position" << i <<endl;
    cin >> arr[i];
 }
 for (int i : arr)
 {
    flag = true;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            flag = false;
            break;
        }
        
    }
    if (flag)
    {
        cout << i<<endl;
    }
    
    
 }
 

 
 
    return 0;
}