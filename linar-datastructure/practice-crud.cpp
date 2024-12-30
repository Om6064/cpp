#include<iostream>

using namespace std;
class Node{
    public :
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkList{
    public :
    Node *head;
    int count;
        LinkList(){
            this->head = nullptr;
            this->count = 0;
        }
        void AddAtStart(int data){
            Node *newNode = new Node(data);
            if (count == 0)
            {
                head = newNode;
            }else{
                newNode->next = head;
                this->head = newNode;

            }
            
            this->count++;
        }
        void AddAtEnd(int data){
            Node *newNode = new Node(data);
             if (count == 0)
            {
               head = newNode;
            }else{
                Node *temp = head;

                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
                temp = nullptr;
                delete temp;
                

            }
            this->count++;
           
            
        }
        void AddAtAny(int data,int pos){
            Node *newNode = new Node(data);
            if (this->count == 0)
            {
               head = newNode;
            }else
            {
                Node *temp = head;
                for (int i = 0; i < (pos-1); i++)
                {
                    temp=temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
                
            }
            
            
            this->count++;

        }
        void DeleteAtStart(){
            Node *temp = head;
            head = head->next;
            delete temp;
            this->count--;
        }
        void search(int data){
            Node *temp = head;
            while (temp  != nullptr)
            {
                if (temp->data == data)
                {
                    cout << "founded !!!";
                }
                
                temp = temp->next;
            }

            
        }
        void viewAll(){
            Node *temp = head;

            while (temp != nullptr)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout << endl;
            
        }
        void DeleteAtEnd(){
            Node *temp = head;
            while (temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;

            
        }
        void DeleteAtAny(int pos){
            Node *current = head;
            Node *prev = head;
            for (int i = 0; i < pos; i++)
            {
                current = current->next;
            }
            for (int i = 0; i < pos-1; i++)
            {
                prev = prev->next;
            }
            prev->next = current->next;
            delete current;
            current = nullptr;

            prev = nullptr;
            delete prev; 
            
        }
       



};

int main(){
    LinkList l1;
    int choise;


    do
    {
        cout << "Enter 1 for Add At Start : "<<endl;
        cout << "Enter 2 for Add At End : "<<endl;
        cout << "Enter 3 for Add At ANY : "<<endl;
        cout << "Enter 4 for Veiw : "<<endl;
        cout << "Enter 5 for Delete At Start : "<<endl;
        cout << "Enter 6 for Delete At End : "<<endl;
        cout << "Enter 7 for Delete At Any : "<<endl;
        cout << "Enter 8 for Update : "<<endl;
        cout << "Enter 9 for size : "<<endl;
        cout << "Enter 10 for search : "<<endl;

        cout << "Enter 0 for exit : "<<endl;
        cout << "Enter your choice : "<<endl;
        cin >>  choise;

        switch (choise)
        {
        case 1:{
            int data;

            cout << "Enter Data : ";
            cin >> data;

            l1.AddAtStart(data);
            
            break;
        }
        case 2:{
             int data;

            cout << "Enter Data : ";
            cin >> data;

            l1.AddAtEnd(data);

            break;
        }
        case 3:{
              int data,pos;

            cout << "Enter pos : ";
            cin >> pos;
            cout << "Enter Data : ";
            cin >> data;

            l1.AddAtAny(data,pos);
            break;
        }
        case 4:{
            l1.viewAll();

            break;
        }
        case 5:{
            l1.DeleteAtStart();
            break;
        }
        case 6:{
            l1.DeleteAtEnd();
             
            break;
        }
        case 7:{
            int pos;

            cout << "Enter Your Postion : ";
            cin >> pos;

            l1.DeleteAtAny(pos);

            break;
        }
        case 8:{
            int data;
            cout << "enetr data : ";
            cin >> data;
            l1.search(data);
            break;
        }
        case 9:{

            break;
        }
        case 0:{

            break;
        }
            
            
        
        default:

            break;
        }
        
    } while (choise != 0);
    

    return 0;
}