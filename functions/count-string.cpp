#include<iostream>
 
using namespace std;
 
int strlen(string); 
int vowel(string);
void ret(string);

int main(){
    string a;
   
    cout << "enter the string : ";
    getline(cin,a);

    cout << "lenth of string is : "<<strlen(a)<<endl;
    cout << "total vowel is : "<<vowel(a)<<endl;

   

    
    ret(a);

 
    return 0;
}

int strlen(string a){
    int count=0;
    

    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
        if (a[i] == ' ')
        {
            count--;
        }
        
        
    }
   
   


    return count;
    
}

int vowel(string a){
   int count1=0;
   int v = 65;

    for (int i = 0; a[i] != '\0'; i++)
    {
       if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
       {
        count1++;
       }
       
        
        
    }

    return count1;

}

void ret(string a){
    int count=0,count1=0,count2=0;
    

     for (int i = 0; a[i] != '\0'; i++)
    {
       if (a[i] >= 'a' && a[i] <= 'z' )
       {
        count++;
       }
       else if (a[i] >= '0' && a[i] <= '9')
       {
        count1++;
       }else{
        count2++;
       }
       
       
        
        
    }
    cout << "for character "<<count++<<endl;
    cout << "for number "<<count1++<<endl;
    cout << "for spacial characrer "<<count2++<<endl;
}


