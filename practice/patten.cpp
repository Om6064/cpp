#include<iostream>
 
using namespace std;
 
int main(){
    int len;
    cin >> len;
    
    for (int i=1; i < len; i++) {
        for (int s=(len-1); s>1; s--) {
            cout <<"  ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"#";
        }
    }

    return 0;
}