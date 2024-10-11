#include<iostream>
 
using namespace std;
 
int main(){
 int size,p,num=0;

 cout << "enter the size : ";
 cin >> size;

 int arr[size];
 int arr1[size];

 for (int i = 0; i < size; i++)
 {
   cout << "enter the value : ";
   cin >> arr[i];
 }
 cout << " enter the starting position";
 cin >> p;

 for (int i = p; i < size; i++)
 {
   arr1[num++]=arr[i];
 }
  for (int i = 0; i < p; i++)
 {
   arr1[num++]=arr[i];
 }
 for (int val : arr1)
 {
   cout << val << " ";
 }
 
 
return 0;
}