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
int main()
{

    Node *head=new Node(10);
    
    Node *a=new Node(20);
    
    Node *b=new Node(30);
    head->next=a;
    a->next=b;
    b->next=NULL;
    
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<endl;
        tmp=tmp->next;
    }
    

    return 0;
    
    
}