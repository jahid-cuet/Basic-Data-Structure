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
int print_size(Node* &head){
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

void compare(Node* head_1,Node* head_2){
    int flag=0;
Node* temp_1 = head_1;
Node* temp_2 = head_2;
if (print_size(temp_1) == print_size(temp_2)) {
    for (int i = 0; i < print_size(temp_1); i++) {
        if (temp_1->value == temp_2->value) {
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
         else {
            flag++;
            break;
            
        }
         
    }
  if(flag==0){
     cout<<"YES";}
   else {
    cout<<"NO";
   }
}
 
   else {
    cout << "NO";
}
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
 insert_tail(head_1,tail_1,val);
    }
     

     int value;

    Node* head_2=NULL;
    Node* tail_2=NULL;

while(true) {
     cin>>value;
     if(value==-1){
    break;  
     }
 insert_tail(head_2,tail_2,value);
      }
      
     compare(head_1,head_2);
     
    return 0;
}