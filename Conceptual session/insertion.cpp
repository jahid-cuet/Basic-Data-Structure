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
int print_size(Node* head){
    Node* tmp=head;
     int count=0;
    while(tmp!=NULL){
       
        tmp=tmp->next;
        count++;
    }
    return count;

}

//Inserted_Values_In_Tail

void insert_at_tail(Node* &head,int value){
    Node* newNode=new Node(value);
   if(head==NULL){
    head=newNode;
    return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}

//Inserted_Values_In_head

void insert_at_head(Node* &head,int value){
    Node* newNode=new Node(value);
    Node* tmp=head;
    head=newNode;
    newNode->next=tmp;
}
void  insert_at_position(Node* head,int index,int value)
{
    Node* newNode=new Node(value);
if(index==1){
    insert_at_head(head,value);
    return;
}
else if(index==print_size(head)){
    insert_at_tail(head,value);
    return;
}

Node* tmp=head;
int pos=1;
while(pos!=index-1){
    tmp=tmp->next;
    pos++;}

Node* tmp2=tmp->next;
tmp->next=newNode;
newNode->next=tmp2;

}
void print_singly_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    insert_at_tail(head,40);
    insert_at_head(head,50);

   
  
    insert_at_position(head,2,2000);
    print_singly_list(head);
      cout<<print_size(head);
    
    return 0;
    
}