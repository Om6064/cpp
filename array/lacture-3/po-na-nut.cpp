#include<iostream>
 
using namespace std;
 
int main(){
 int size,po=0,na=0,nu=0;

 cout << "enter the size";
 cin >> size;

 int arr[size];

 for (int i = 0; i < size; i++)
 {
    cout << "enter the value : ";
    cin >> arr[i];
 }

 for (int i : arr)
 {
     if (i == 0)
 {
    // cout << " it s a nut number";
    nu++;
 }
 else if (i > 0)
 {
    // cout << " it s a pos number";
    po++;
 }
 else if (i < 0)
 {
    // cout << " it s a nag number";
    na++;
 }
 else{
    cout << "it s not valid input";
 }
 }
 cout << po << nu << na;
 

 
 
 
    return 0;
}