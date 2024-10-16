#include <iostream>

using namespace std;

int main(){
    int row,col;
    cout<<"Enter Size of row : ";
    cin>>row;
    cout<<"Enter Size of col : ";
    cin>>col;

    int x[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"enter your value : ";
            cin>>x[i][j];
            
        }
    cout<<endl;
    }
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<x[i][j]<<" ";
            
        }
    cout<<endl;
    }

   
return 0;
}