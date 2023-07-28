#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->address << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_tail(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void at_previous(Node* head,string address){
    Node* tmp=head;
    while(tmp->address!=address){
        tmp=tmp->next;
    }
    cout<<tmp->prev->address;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string address;
    while (true)
    {
        cin >>address;
        if (address == "end")
            break;
        insert_tail(head, tail, address);
    }
string command;
cin>>command>>address;
    
    if(command=="pre"){
at_previous(head,address);
    }
    
    return 0;
}