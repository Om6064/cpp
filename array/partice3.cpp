// #include <iostream>

// using namespace std;

// int main()
// {
//     int row, col;

//     cout << "Enter Row Size : ";
//     cin >> row;
//     cout << "Enter col Size : ";
//     cin >> col;

//     int x[row][col];
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < i; j++){
//             cout<<"Enter value : ";
//             cin>>x[i][j];
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < i; j++){
//             cout<<x[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

   #include <iostream>
using namespace std;

int main(){
    int elemen[100][100], n, i, j, k;
    
    cout <<"input element = ";
    cin >>n;
    
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            elemen[0][j] = 1;
            elemen[n-1][j] = 1;
            elemen[n-i][n-j] = 1;           
            cout <<elemen[i][j]<<" ";
        }   
        cout<<endl;
    }
}
