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
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    Node* tail=b;
print_normal_list(head);
print_In_reverse(tail);
    return 0;
}