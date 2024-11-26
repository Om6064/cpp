#include<iostream>
 
using namespace std;
 
int main(){
 int arr[5]={};

 int *ptr[5];
 for (int i = 0; i < 5; i++)
 {
    ptr[i]=&arr[i];
 }
 for (int i = 0; i < 5; i++)
 {
    cout << ptr[i]<< "\t";
 }
 
    return 0;
}