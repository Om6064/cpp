#include<iostream>
 
using namespace std;
 
int main(){
 int start,end,ans,a=0,b=1,num=0;

    cout << "enter the starting value and ending value : ";
    cin >> start >> end;

 

    int arr[end];

 for (int i = 2; i < end; i++)
 {
    
        ans = a+b;
    arr[num] = ans;
    num ++;
        a=b;
        b=ans;

        // cout<<ans << " ";
        arr[i]=ans;

        // if (ans == start)
        // {
        //     cout << arr[i] << " ";
        // }
        
    
    
    
 }
 for (int i = start - 3; i < end - 2; i++)
 {
    cout << arr[i] << " ";
 }
 
 
    return 0;
}

// 0 1 1 2 3 5 8 13 