#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int value;
       Node* left;
       Node* right;
    Node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }


};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
bool Binary_search(Node* root, int x){
    if(root==NULL) return false;
    if(root->value==x) return true;
    if(root->value>x){

        return Binary_search(root->left,x);  //if its correct definately return true else return false.

}
else{
    return Binary_search(root->right,x);
}


}
int main()
{
    Node* root=input_tree();
    int x;
    cin>>x;

   if( Binary_search(root,x)) cout<<" Yes Found this Value";
    else cout<<"Not found";
    return 0;
}