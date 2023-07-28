
 #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value= value;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head,Node* &tail, int value)
{
     Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    //Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head,Node* tail)
{
    Node *tmp1 = head;
    Node* tmp2=tail;
    while (tmp1 != NULL &tmp2!=NULL)
    {
        cout << tmp1->value<< " "<<tmp2->value;
          tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    Node *head=NULL;
    Node *tail=NULL;
    cin>>Q;
    for(int i=0;i<Q;i++){

    int op;
    cin>>op; //X=op
    if (op == 0)
        {
            int v;
            cin >> v;
            insert_at_head(head,tail,v);
        }
   else if(op==1){
        int v;
        cin>>v;
        insert_tail(head,tail,v);
    }
   print_linekd_list(head, tail);

   
 

    }
    
   
    
    return 0;
}