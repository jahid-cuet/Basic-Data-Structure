#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  bool flag=false;
  for(int i=1;i<n;i++){
     if(a[0]==a[i]){
           flag=true;
        }
       
  }
  if(flag==true) cout<<"YES";
  else cout<<"No";
  return 0;
}