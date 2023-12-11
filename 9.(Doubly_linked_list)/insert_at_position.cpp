#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int value;
Node* next;
Node* prev;

Node (int value){
this->value=value;
this->next=NULL;
this->prev=NULL;

}

};

void insert_at_position(Node*head,int pos,int value){
    Node* newNode=new Node(value);
    Node* tmp=head;

    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
void print_normal_list(Node* head){
  
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
void print_In_reverse(Node* tail){

 Node* tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->prev;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    Node* tail=c;
    insert_at_position(head,2,100);
print_normal_list(head);
print_In_reverse(tail);
    return 0;
}