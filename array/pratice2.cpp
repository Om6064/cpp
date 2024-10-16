#include <iostream>

using namespace std;

int main()
{
    int size,k=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];


    for (int i = 0; i < size; i++){
        cout<<"Enter Your Value : "<<i<<" : ";
        cin>>arr[i];
    }

    int p;
    cout<<"Enter the position of index : ";
    cin>>p;


    int arr2[size];
    
    for(int i = p; i<size; i++){
        cout<<"your value is : "<<i<<" : ";
        cout<<arr[i]<<endl;
        arr2[k++]=arr[i];
    }

     for(int i = 0; i<p; i++){
        cout<<"your value is : "<<i<<" : ";
        cout<<arr[i]<<endl;
        arr2[k++]=arr[i];
    }
    for(int value : arr2){
        cout<<value<<" ";
    }

    return 0;
}