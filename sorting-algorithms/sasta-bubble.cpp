#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size,count=0;
    cout << "Enter size of an array : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
       cout <<"Enter Element : ";
       cin >> arr[i];
    }
    

    for (int i = 0; i < (size-1); i++)
    {
        for (int j = 0; j < (size - i -1); j++)
        {
           
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
            count++;
            
        }
       
        
        
    }
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    cout << count;
    
    return 0;
}