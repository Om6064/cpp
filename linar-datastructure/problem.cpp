#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *HEAD = new Node();

    HEAD->data = 45;
    HEAD->next = nullptr;

    Node *current = new Node();

    current->data = 77;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 7;
    current->next = nullptr;
    HEAD->next->next = current;

    Node *ptr;
    ptr = HEAD;

    while (ptr != NULL)
    {
        cout<< "Data : "<<ptr->data<<" Next :"<<ptr->next<<" CURRENT : "<<ptr << endl;
        ptr = ptr->next;
    }
    
    

    // cout << " Head : "<<HEAD->data<<" Next : "<<HEAD->next<<" CUURENT ADDRESE : "<<HEAD<<endl;
    // cout << " node 2  : "<<HEAD->next->data<<" Next : "<<HEAD->next->next<<" CUURENT ADDRESE : "<<HEAD->next<<endl;
    // cout << " tail : "<<current->data<<" Next : "<<current->next<<" CUURENT ADDRESE : "<<current<<endl;
    return 0;
}