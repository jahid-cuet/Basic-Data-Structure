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
 Node* input_tree(){
int value;
cin>>value;
Node* root;
if(value==-1) root=NULL;
else root=new Node(value);
queue<Node*>q;
if(root) q.push(root);
while(!q.empty()){
    //1.node ber kore ano
     Node* p=q.front();
    q.pop();
    //2. Jabotiyo kaj kora
    int l,r;
    cin>>l>>r;
    Node* myleft;
    Node* myright;
    if(l==-1) myleft=NULL;
    else myleft=new Node(l);
     if(r==-1) myright=NULL;
    else myright=new Node(r);
    p->left = myleft;
        p->right = myright;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}


 void   level_order(Node* root){
    if(root==NULL){

cout<<"Tree Nai"<<" ";
return;

    }

queue<Node*>q;
q.push(root);
while(!q.empty()){
    //ber kore ana
Node* f=q.front();
q.pop();


//2.jabotiyo kaj kora
cout<<f->value<<" ";
//3.Tar children guluke rakha
if(f->left) q.push(f->left);
if(f->right) q.push(f->right);
}

}
int main()
{
   Node* root=input_tree();
     level_order(root);
    
    return 0;
}