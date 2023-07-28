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
void print_recursion(Node *n)
{
    // base case
    if (n == NULL)
        return;
    print_recursion(n->next);

}
void print_reverse(Node *n)
{
    if (n == NULL)
        return;

    print_reverse(n->next);
    cout << n->value << " ";
    
}


void print_the_original_linked_list(Node* head)
{
    Node *tmp= head;
    while (tmp!= NULL)
    {
        cout << tmp->value << " ";
        
        tmp= tmp->next;
          }
 
    cout << endl;
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
    print_recursion(head);
    print_reverse(head);
    cout<<endl;
    print_the_original_linked_list(head);
    

    

    return 0;
}