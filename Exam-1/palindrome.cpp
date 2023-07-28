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
void insert_tail_1(Node *&head,Node* &tail,int value){
Node* newNode=new Node(value);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
}
tail->next=newNode;
tail=newNode;
}

 void insert_tail_2(Node *&head,Node *&tail, int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverse(Node *&head,Node *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

  bool isPalindrome(Node *head)
    {
        Node *newHead = NULL;
        Node *newTail = NULL;
        Node *tmp = head;
        while (tmp != NULL)
        {
            insert_tail_2(newHead, newTail, tmp->value);
            tmp = tmp->next;
        }
        reverse(newHead, newHead);
        
        tmp = head;
        Node *tmp2 = newHead;
        while (tmp != NULL)
        {
            if (tmp->value != tmp2->value)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }


int main()
{


Node* head=NULL;
Node* tail=NULL;
int value;
while(true){
    cin>>value;
    if(value==-1) break;
    insert_tail_1(head,tail,value);
}

if(isPalindrome(head)==true) cout<<"YES";
else{
    cout<<"FALSE";
}
  
           

    return 0;
}