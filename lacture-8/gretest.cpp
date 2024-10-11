#include<iostream>
 
using namespace std;
 
int main(){
 int a,b,c,d,max;
cout << " enter the value of A,B,C and D";
cin >> a >> b >> c >> d;

max = a;
if (a == b && b == c && c==d){
    cout << " all are same !";

    return 0;
}
if (a == b) cout << "A and B are same !";

if (a == c) cout << "A and C are same !";

if (a == d) cout << "A and D are same !";

if (b == d) cout << "B and D are same !";

if (b == c) cout << "B and C are same !";

if (c == d) cout << "C and D are same !";


if (max < a) max =a;
if (max < b) max =b;
if (max < c) max =c;
if (max < d) max =d;

cout << "the gratest number is : "<<max;



    return 0;
}