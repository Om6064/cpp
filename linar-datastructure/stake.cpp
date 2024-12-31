#include <iostream>

using namespace std;
class Stake
{
private:
    int top;
    int *arr;
    int count;
    int capacity;

public:
    Stake(int size)
    {
        
        this->top = -1;
        this->arr = new int[capacity];
        this->count = 0;
        this->capacity = size;
    }
    void push(int);
    void pop();
    void peek();
    void display();
    bool isEmpty();
    bool isfull();
    void size();
};
void Stake::push(int data)
{
    if (this->top == (capacity-1))
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
    cout << "----------ELEMENTS----------\n";
    for (int i = this->top; i >= 0; i--)
    {
        cout << this->arr[i] << " ";
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
    cout << arr[top] << " is deleted" << endl;
    arr[top] = 0;
    this->top--;
    count--;
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
    return (top == capacity-1) ? true : false;
}
void Stake::size(){
    cout <<" Element Size is : "<<this->count<<endl;
}
int main()
{
    Stake stake(3);
    int choice;

    do
    {
        cout << "Enter 1 for push.." << endl;
        cout << "Enter 2 for pop.." << endl;
        cout << "Enter 3 for peek.." << endl;
        cout << "Enter 4 for display.." << endl;
        cout << "Enter 5 for isEmpty or not.." << endl;
        cout << "Enter 6 for isfull or not.." << endl;
        cout << "Enter 7 for size" << endl;
        cout << "enter your choice..." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "enter Data : ";
            cin >> data;

            stake.push(data);
            break;
        }
        case 2:
        {
            stake.pop();
            break;
        }
        case 3:
        {
            stake.peek();
            break;
        }
        case 4:
        {
            stake.display();
            break;
        }
        case 5:
        {
            if (stake.isEmpty())
            {
                cout << "Stack is empty\n";
            }
            else
            {
                cout << "Stack is not empty\n";
            }

            break;
        }
        case 6:
        {
             if (stake.isfull())
            {
                cout << "Stack is full\n";
            }
            else
            {
                cout << "Stack is not full\n";
            }
            break;
        }
        case 7:
        {
            stake.size();
            break;
        }

        default:
            break;
        }
    } while (choice != 8);

    return 0;
}