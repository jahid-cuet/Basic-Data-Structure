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
int print_size(Node* head){
    Node* tmp=head;
     int count=0;
    while(tmp!=NULL){
       
        tmp=tmp->next;
        count++;
    }
    return count;

}

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
void sort(Node* &head){

for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
  void find_mid(Node *head){
    int size=print_size(head);
    int mid=(size+1)/2;
    Node* tmp=head;
    for(int i=0;i<mid-1;i++){
        tmp=tmp->next;
    }
    if(size%2==0){
        cout<<tmp->value<<" "<<tmp->next->value<<endl;
    }
    else{
        cout<<tmp->value<<endl;
    }
  }
int main()
{

    int value;

    Node* head=NULL;
    Node* tail=NULL;

      while(true) {
     cin>>value;
     if(value==-1){
    break;  
}
 insert_tail(head,tail,value);
    }
    sort(head);
    
    find_mid(head);

    

    return 0;
}