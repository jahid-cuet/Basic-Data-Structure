#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
int mx=0;
int count_leaf_mx(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
        
    }
    else
    {
        int l = count_leaf_mx(root->left);
        int r = count_leaf_mx(root->right);
return max(l,r);
    }
}

int mn=0;
int count_leaf_mn(Node *root)
{
    if (root == NULL)
        return 3001; //when i used 0 here output will be zero for min thats why i use this value that getting from rahat khan pathan.this value for min and i have got exect out put here
    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
        
    }
    else
    {
        int l = count_leaf_mn(root->left);
        int r = count_leaf_mn(root->right);
        return min(l,r);
    }
}

int main()
{
    Node *root = input_tree();
    cout << count_leaf_mx(root) <<" ";
    cout << count_leaf_mn(root);
    return 0;
}