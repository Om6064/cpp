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

    HEAD->data = 77;
    HEAD->next = nullptr;


    Node *n2 = new Node();

    n2->data = 777;
    n2->next = nullptr;
    HEAD->next = n2;

    Node *n3 = new Node();

    n3->data = 7777;
    n3->next = nullptr;
    n2->next = n3;
    cout << "HEAD : "<<HEAD->data<<"next : "<<HEAD->next<<"THIS POINTER : "<<HEAD<<endl;
    cout << "HEAD : "<<n2->data<<"next : "<<n2->next<<"THIS POINTER : "<<n2<<endl;
    cout << "HEAD : "<<n3->data<<"next : "<<n3->next<<"THIS POINTER : "<<n3<<endl;


    return 0;
}