#include<bits/stdc++.h>
using namespace std;




class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};




class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
bool same(int n, int m, int A[], int B[]) {
    if (n != m) {
    return false;
    }
    for (int i = 0; i < m; i++) {
    if (A[i] != B[i]) {
    return false; 
        }
    }

    return true; 
}

int main()
{

  myStack st;
  myQueue q;
    int n,m;
    cin>>n>>m;

  int A[n],B[m];
  for(int i=0;i<n;i++){
    cin>>A[i];
    st.push(A[i]);
  }
  
  for(int i=0;i<n;i++){
    A[i]=st.top();
    st.pop();
  }
  for(int i=0;i<m;i++){
    cin>>B[i];
    q.push(B[i]);
  }
  
  for(int i=0;i<m;i++){
    B[i]=q.front();
    q.pop();
  }
  if(same(n,m,A,B)==true) cout<<"Yes";

    else cout<<"NO";

  return 0;
}