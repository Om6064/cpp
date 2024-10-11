#include<iostream>
 
using namespace std;
 
int main(){
 int start_year,end_year,count=0,rem;

 cout << "Enter your Start-Year : ";
 cin >> start_year;

 cout << "Enter your End-Year : ";
 cin >> end_year;

 
 

 if (start_year > end_year){
    start_year = start_year + end_year;
    end_year = start_year - end_year;
    start_year = start_year - end_year;
 }

 if ((start_year % 4==0))
 {
    for (int i = start_year; i <= end_year; i+=4)
    {
      if (i % 100 !=0 || i % 400 ==0)
      {
         cout << i << endl;
      }
      
        
        count++;
    }
    cout << "your count is : "<<count;
    
 }else{
    rem=start_year % 4 ;
    start_year = start_year + (4 - rem);
     for (int i = start_year; i <= end_year; i+=4)
    {
        if (i % 100 !=0 || i % 400 ==0)
      {
         cout << i << endl;
      }
        count++;
    }
    cout << "your count is : "<<count;
 }
 
    return 0;
}