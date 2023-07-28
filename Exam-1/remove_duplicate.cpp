#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int value;
Node* next;

Node (int value){
this->value=value;
this->next=NULL;

}

};

void insert_tail(Node *&head,Node* &tail,int value){
Node* newNode=new Node(value);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
}
tail->next=newNode;
tail=newNode;
}
void sort(Node* head){
    Node* tmp=head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value >j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void delete_duplicate_node(Node*head){

if(head==NULL){
    return;
}
Node* tmp=head;
while(tmp->next!=NULL){
    if(tmp->value==tmp->next->value){
        Node* deleteNode=tmp->next;
        tmp->next=tmp->next->next;
        delete deleteNode;
    }
    if(tmp->next==NULL) break;
    else if(tmp->value!=tmp->next->value){
        tmp=tmp->next;
    }
}
}
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
}

int main()
{


Node* head=NULL;
Node* tail=NULL;
int value;
while(true){
    cin>>value;
    if(value==-1) break;
    insert_tail(head,tail,value);

}
sort(head);
delete_duplicate_node(head);
print_linked_list(head);

    return 0;
}