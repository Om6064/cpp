#include<iostream>
 
using namespace std;
 void change(int*,int*);
int main(){
    int a,b;
 cout << "enter a and b";
 cin >> a >>b;

 cout << "after : "<<endl;
 cout << a<<endl;
 cout << b<<endl;

 change(&a,&b);

 cout << "before : "<<endl;
 cout << a<<endl;
 cout << b<<endl;



    return 0;
}

void change(int *a, int *b){
    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;

    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}