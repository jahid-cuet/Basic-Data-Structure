#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_singly_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void mx_print(Node* head){
    Node* tmp=head;
    int mx=tmp->value;
    for(Node *i=head;i->next!=NULL;i=i->next){
        if(mx<i->next->value){
             mx=i->next->value;
        }
    }
    

cout<<"The Maximum value is="<<mx<<endl;
}
void mn_print(Node* head){
    Node* tmp=head;
    int mn=tmp->value;
    for(Node *i=head;i->next!=NULL;i=i->next){
        if(mn>i->next->value){
             mn=i->next->value;
        }
    }
    cout<<"The Minimum Value is="<<mn;
    
}
    
    
int main()
{
    int value;
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
     cin>>value;
     if(value==-1){
    break;   
}
 insert_tail(head,tail,value);
    }
print_singly_list(head);
mx_print(head);
mn_print(head);

    
    return 0;
}