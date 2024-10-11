#include<iostream>
 
using namespace std;
 
int main(){
 int s1,s2,s3,s4,avg;

 cout << " enter the marks of first subject";
 cin >> s1;

 cout << " enter the marks of second subject";
 cin >> s2;

 cout << " enter the marks of third subject";
 cin >> s3;

 cout << " enter the marks of four subject";
 cin >> s4;

 avg= (s1+s2+s3+s4)/4;
cout << "avarage of four subject is : "<< avg << endl;

if (s1 < 100|| s2 < 100 || s3 < 100 || s4 < 100)
{
if (avg < 35){
    cout << "grade F : fail";
} 
else if (avg < 35 || avg > 60) {
    cout << "grade D : ";
}
else if (avg < 60 || avg > 70){
    cout << "grade C : ";
} 
else if (avg < 70 || avg > 80){
    cout << "grade B : ";
} 
else{
    cout << "grade A";

} 
}
else
{
    cout << "OOPS!! Subject Marks Is Cannot Grater Then 100 : ";
}





    return 0;
}