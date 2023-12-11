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
int print_list1_size(Node* head_1){
    Node* tmp=head_1;
     int count=0;
    while(tmp!=NULL){
       
        tmp=tmp->next;
        count++;
    }
    return count;

}

    int print_list2_size(Node* head){
    Node* tmp=head;
     int count=0;
    while(tmp!=NULL){
       
        tmp=tmp->next;
        count++;
    }
    return count;

}
void insert_tail_1(Node *&head_1, Node *&tail_1, int value)
{
    Node *newNode = new Node(value);
    if (head_1 == NULL)
    {
        head_1 = newNode;
        tail_1 = newNode;
        return;
    }
    tail_1->next = newNode;
    tail_1 = newNode;
}
void print_singly_list1(Node *head_1)
{
    Node *tmp = head_1;
     cout<<"List_1 is=";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail_2(Node *&head_2, Node *&tail_2, int value)
{
    Node *newNode = new Node(value);
    if (head_2== NULL)
    {
        head_2= newNode;
        tail_2 = newNode;
        return;
    }
    tail_2->next = newNode;
    tail_2 = newNode;
}
int print_singly_list2(Node *head_2)
{
    Node *tmp= head_2;
    cout<<"List_2 is=";
    while (tmp!= NULL)
    {
        cout << tmp->value << " ";
        
        tmp= tmp->next;
          }
 
    cout << endl;
}    


int main()
{

    int val;

    Node* head_1=NULL;
    Node* tail_1=NULL;

      while(true) {
     cin>>val;
     if(val==-1){
    break;  
}
 insert_tail_1(head_1,tail_1,val);
    }
    print_singly_list1(head_1);

     int value;

    Node* head_2=NULL;
    Node* tail_2=NULL;

      while(true) {
     cin>>value;
     if(value==-1){
    break;  
}
 insert_tail_2(head_2,tail_2,value);
}
print_singly_list2(head_2);



//print_list1_size(head_1);
//print_list1_size(head_2);

    return 0;
}