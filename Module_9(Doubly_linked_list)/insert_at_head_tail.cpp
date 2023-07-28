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
void insert_at_head(Node* &head,Node*&tail,int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;


}


void insert_at_tail(Node*&tail,int value){
Node* newNode=new Node(value);
if(tail==NULL){
    tail=newNode;
}
tail->next=newNode;
newNode->prev=tail;
tail=newNode;


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
    insert_at_head(head,tail,100);

insert_at_tail(tail,200);

print_normal_list(head);
print_In_reverse(tail);
    return 0;
}