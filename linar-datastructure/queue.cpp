#include <iostream>

using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int *arr;
    int count;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[size];
        this->count = 0;
    }
    ~Queue()
    {
        delete[] arr;
    }
    void enqueue();
    void deekuue();
    void Front();
    void Rear();
    void display();
    bool isEmpty();
    bool isfull();
    void getsize();
};
void Queue::enqueue()
{
   
    if (this->rear == (size - 1))
    {
        cout << "Queue is Full ..." << endl;
        return;
    }
    int data;
    cout << "Enter Your Data : " << endl;
    cin >> data;

    if (this->front == -1 && this->rear == -1)
    {
        this->front++;
        this->rear++;
        this->arr[rear] = data;
        this->count++;
    }
    else
    {
        this->rear++;
        this->arr[rear] = data;
        this->count++;
    }
}
void Queue::display()
{
    if (this->rear == -1 && this->front == -1)
    {
        cout << "Queue Is Empty : ";
        return;
    }
    for (int i = this->front; i <= this->rear; i++)
    {
        cout << this->arr[i] << " ";
    }
    cout << endl;
}
void Queue::deekuue()
{
    if (this->rear == -1 && this->front == -1)
    {
        cout << "Queue Is Empty : ";
        return;
    }
    if (this->rear == this->front)
    {
        this->arr[front] = 0;
        this->front = -1;
        this->rear = -1;
        this->count--;
    }
    else
    {
        this->arr[front] = 0;
        this->front++;
        this->count--;
    }
}
void Queue::Front()
{
    if (this->rear == -1 && this->front == -1)
    {
        cout << "Queue Is Empty : ";
        return;
    }

    cout << "Front Element is : " << arr[front] << " " << endl;
}
void Queue::Rear()
{
    if (this->rear == -1 && this->front == -1)
    {
        cout << "Queue Is Empty : ";
        return;
    }

    cout << "Rear Element is : " << arr[rear] << " " << endl;
}
bool Queue::isEmpty(){
    if (this->rear== -1 && this->front == -1)
    {
        return true;
    }else{
        return false;
    }
    
}
bool Queue::isfull(){
    if (this->rear == (size-1))
    {
        return true;
    }else{
        return false;
    }
}
void Queue::getsize(){
    cout << "Queue is : "<<this->count<<" "<<endl;
}

int main()
{
    Queue q1(5);

    int choice;

    do
    {
        cout << "Enter 1 for enqueue.." << endl;
        cout << "Enter 2 for deeueue.." << endl;
        cout << "Enter 3 for Front.." << endl;
        cout << "Enter 4 for Rear.." << endl;
        cout << "Enter 5 for display.." << endl;
        cout << "Enter 6 for isEmpty or not.." << endl;
        cout << "Enter 7 for isfull or not.." << endl;
        cout << "Enter 8 for size" << endl;
        cout << "enter your choice..." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            q1.enqueue();
            break;
        }
        case 2:
        {
            q1.deekuue();
            break;
        }
        case 3:
        {
            q1.Front();
            break;
        }
        case 4:
        {
            q1.Rear();

            break;
        }
        case 5:
        {
            q1.display();
            break;
        }
        case 6:
        {
            if (q1.isEmpty())
            {
                cout << "Quue Is Empty : ";
            }else{
                cout << "Queue Is Not Empty : ";
            }
            
            break;
        }
        case 7:
        {
             if (q1.isfull())
            {
                cout << "Quue Is Full : ";
            }else{
                cout << "Queue Is Not Full : ";
            }
            
            break;
        }
        case 8:
           q1.getsize();
           break;

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}