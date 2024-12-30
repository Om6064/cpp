#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkList
{
public:
    int count;
    Node *head;

    LinkList()
    {
        this->count = 0;
        this->head = nullptr;
    }

    void AddAtStart(int data)
    {
       Node *newNode = new Node(data);
       if (count == 0)
       {
        head = newNode;
       }else{
        newNode->next = head;
        head = newNode;
       }
       
       this->count++;
    }
    void AddAtEnd(int data)
    {
        Node *newNode = new Node(data);

        if (count == 0)
        {
            head = newNode;
        }
        else
        {
            Node *temp;
            temp = head;

            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        this->count++;
    }
    void AddAtAny(int data, int pos)
    {
        Node *newNode = new Node(data);

        if (pos == 0)
        {
            newNode->next = head;
            head = newNode;

        }else {
            Node *temp =head;
            for (int i = 0; i < (pos-1); i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;

            
        }

        this->count++;
    }
    void ViewAll()
    {
        Node *ptr;
        ptr = head;

        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    void update(int data,int pos){
        Node *temp = head;

        for (int i = 0; i < pos; i++)
        {
             temp = temp->next;
        }
        temp->data = data;
    }
    void deleteatstart(){
        if (count == 0)
        {
            cout << "Linklist is empty : ";
            return;
        }
        
        Node *temp = head;
        head = head->next;
        delete temp;
        temp = NULL;
        this->count--;
    }
    void deleteatend(){
        Node *temp = head;
    if (count == 0)
    {
        cout << "liNK liST iS eMPTY";
        return;
    }
    
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        // cout << "BEfore" << endl;
        // temp->next = nullptr;
        // cout << "After 1" << endl;
        // delete temp->next->next;
        // cout << "After" << endl;

        delete temp->next;
        temp->next = nullptr;
        this->count--;
    }
    void deleteatany(int pos){
        Node *temp = head;

        if (count == 0)
        {
            cout << "Link List is empty : ";
            return;
        }
        if (pos == 0)
        {
            deleteatstart();
            return;
        }
        

        
        for (int i = 0; i < (pos -1); i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        // temp = NULL;
        delete temp;

        this->count--;
    }
};

int main()
{
    LinkList l1;
    int choise;

    do
    {
        cout << "\nenater 1 for start" << endl;
        cout << "enater 2 for end" << endl;
        cout << "enater 3 for any" << endl;
        cout << "enater 4 for view all" << endl;
        cout << "enater 5 for update" << endl;
        cout << "enater 6 for delete at start" << endl;
        cout << "enater 7 for delete at end" << endl;
        cout << "enater 8 for delete at any" << endl;
        cout << "enater 0 for exit.." << endl;
        cout << "enter your choise " << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            int data;

            cout << "enter data: " << endl;
            cin >> data;

            l1.AddAtStart(data);

            break;
        }
        case 2:
        {
            int data;

            cout << "enter data: " << endl;
            cin >> data;

            l1.AddAtEnd(data);
            break;
        }
        case 3:
        {
            int pos,data;
            cout <<"Enter Postion : ";
            cin >> pos;
            cout <<"Enter Data : ";
            cin >> data;
            l1.AddAtAny(data,pos);
            break;
        }
        case 4:
        {
            l1.ViewAll();
            break;
        }
        case 5:
        {
            int pos,data;
            cout <<"Enter Postion : ";
            cin >> pos;
            cout <<"Enter Data : ";
            cin >> data;
            l1.update(data,pos);
            break;
        }
        case 6:{
            l1.deleteatstart();
            break;}
        case 7:{
            l1.deleteatend();
            break;
        }
        case 8:{
            int pos;
            cout << "enter pos you want delete : ";
            cin >> pos;
            l1.deleteatany(pos);

            break;
        }
        

        default:
            break;
        }
    } while (choise != 0);

    return 0;
}