#include<iostream>

using namespace std;
class Stake{
    private:
        int *arr;
        int count;
        int size;
        int top;
    public :
        Stake(int size){
            this->arr = new int[size];
            this->count = 0;
            this->size = size;
            this->top = -1;
        }
        ~Stake(){
            delete[] arr;
            arr = nullptr;
        }
        void push(int);
    void pop();
    void peek();
    void display();
    bool isEmpty();
    bool isfull();
    void size1();
};
void Stake::push(int data)
{
    if (this->top == (size-1))
    {
        cout << "Array is overflow : "<<endl;
        return;
    }
    
   this->top++;
   this->arr[top] = data;
   this->count++;
}
void Stake::display()
{
   
    for (int i = this->top; i >= 0; i--)
    {
        cout << this->arr[i] ;
    }
    cout << endl;
}
void Stake::pop()
{
     if (this->top == -1)
    {
        cout << "Array is underflow : "<<endl;
        return;
    }
    this->arr[top] = 0 ;
    this->top--;
   this->count--;
}
void Stake::peek()
{
      if (this->top == -1)
    {
        cout << "Array is underflow : "<<endl;
        return;
    }
    cout << "--------LAST-ELEMENT--------\n";
    cout << arr[top] << endl;
}

bool Stake::isEmpty()
{
    return (top == -1 and count == 0) ? true : false;
}
bool Stake::isfull()
{
    return (top == size-1) ? true : false;
}
void Stake::size1(){
    cout <<" Element Size is : "<<this->count<<endl;
}
int main()
{
    Stake stake(20);
    int n;

    cout << "Enter Your Number !!!..";
    cin >> n;

    while (n > 0)
    {
       int rem = n%2;
       stake.push(rem);
       n = n/2;
    }
    stake.display();
    

   

    return 0;
}



