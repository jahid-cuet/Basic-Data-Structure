#include<bits/stdc++.h>
using namespace std;


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

   stack<int>st;
   queue<int>q;
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
  if(same(n,m,A,B)==true) cout<<"YES";

    else cout<<"NO";

  return 0;
}