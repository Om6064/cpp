#include<iostream>
 
using namespace std;
 
int main(){
 int size,p;


 cout << "enter the size of array";
 cin >> size;

 int arr[size];


 

 for (int i = 0; i < size; i++)
 {
    cout << "enter the value of an array at position" << i;
    cin >> arr[i];
 }
 cout << "enter the starting postion of array";
 cin >> p;
 
    
    
 for (int i = p; i < size; i++)
 {
    cout << arr[i] << " ";
 }
 for (int i = 0; i < p; i++)
 {
    cout << arr[i] << " ";
 }
 
 

 
 
    return 0;
}