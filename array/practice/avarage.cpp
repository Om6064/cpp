#include<iostream>
 
using namespace std;
 
int main(){
 int size,sum=0;

 cout << "enter the size of array";
 cin >> size;

 int arr[size];

 for (int i = 0; i < size; i++)
 {
    cout << "enter the value of array";
    cin >> arr[i];
    sum = sum + arr[i];
 }
 cout << "the avaerage : "<< (float)sum / size;

 
return 0;
}