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
//Start Insert Tail part

void insert_at_tail(Node *&head,int v)
{
    Node *newNode=new Node(v);
    if(head==NULL){
          head = newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
        
    }
    Node *tmp=head;
    while(tmp->next !=NULL){
        tmp=tmp->next;
    }
    //tmp ekhon last node e
        tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
    
    
    tmp->next=newNode;
}

//End the Insert at Tail part

//Start Linked list portion
void print_linked_list(Node*head){
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while(tmp !=NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
     cout << endl
         << endl;
}
//End linked List portion

//Start Insert at Position Part

void insert_at_position(Node *head,int v,int pos){
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
   cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;

}
//End at position Part

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}


int main()
{
    Node *head=NULL;
    while(true){
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Insert at head" << endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if (op == 2)
        {
            print_linked_list(head);
        }
   
    else if(op==3){
        int v;
        cout<<"The value is="<<endl;

        cin>>v;
        int pos;
        cin>>pos;
        insert_at_position(head,v,pos);
    }
     
    else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
 }


    
   
    
    return 0;
}