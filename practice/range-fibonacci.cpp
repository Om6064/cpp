#include<iostream>
 
using namespace std;
 
int main(){
 int start,end,ans,a=0,b=1;

    cout << "enter the starting value and ending value : ";
    cin >> start >> end;

    cout << start <<" ";

    int arr[end];

 for (int i = 0; i < end; i++)
 {
    
        ans = a+b;

        a=b;
        b=ans;
        arr[i]=ans;

        if (ans == start)
        {
            cout << arr[i] << " ";
        }
        
    
    
    
 }
 
    return 0;
}

// 0 1 1 2 3 5 8 