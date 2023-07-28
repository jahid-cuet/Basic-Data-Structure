#include<bits/stdc++.h>
using namespace std;
int main()
{
  int Q;
  cin>>Q;
   queue<string> q;
  for(int i=0;i<Q;i++){
int com;
cin>>com;

if(com==0){
    string s;
    cin>>s;
q.push(s);
}
else if(com==1){
    if(!q.empty()){
    cout<<q.front()<<"endl";
    q.pop();}
    else cout<<"Invalid";
    }
}

  
 
    return 0;
}