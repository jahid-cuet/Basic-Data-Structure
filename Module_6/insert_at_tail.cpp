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
void insert_at_tail(Node *&head,int v){
    Node *newNode=new Node(v);
    if(head==NULL){
        head=newNode;
return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL){
tmp=tmp->next;
    }
    //tmp Ekhon Last Node e
}
    void print_linked_list(Node *head){
        Node* tmp=head;
        while(tmp!=NULL){
            cout<<tmp->value<<endl;
            tmp=tmp->next;
        
    }

}
int main()
{
    Node *head=NULL;
    cout<<"Insert at Tail"<<endl;
    int op;
    cin>>op;
    if(op==1){
     int v;
     cin>>v;
     insert_at_tail(head,v);

    }
    print_linked_list(head);
    

    return 0;
}