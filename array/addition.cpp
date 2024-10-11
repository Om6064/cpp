#include<iostream>
 
using namespace std;
 
int main(){
int size,avg,sum;

cout << "Enter the size : ";
cin >> size;
 int arr[size];

 for (int i = 0; i < size; i++)
 {
    cout << "enter the Values of first array : ";
    cin >> arr[i];
 }

 int arr1[size];

 for (int i = 0; i < size; i++)
 {
    cout << "enter the Values of second array: ";
    cin >> arr1[i];
 }
 
 int arr2[size];

 for (int i = 0; i < size; i++)
 {
    arr2[i]=arr[i]+arr1[i];
 }
  for (int i = 0; i < size; i++)
 {
    
    cout << arr[i] << " + " << arr1[i] << " = " << arr2[i] << endl;
   
 }

    return 0;
}