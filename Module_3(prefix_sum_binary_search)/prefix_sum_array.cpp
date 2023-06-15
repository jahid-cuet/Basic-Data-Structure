#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int a[n]; //1 2 3 4 5
  for(int i=0;i<n;i++){      //The lower index=l-1 that means lth value.
                             //The higher index=r-1 that means rth value
    cin>>a[i];
  }  
  while(q--){
  int l,r;
  cin>>l>>r;
  l--;
  r--;
  int sum=0;
  for(int i=l;i<=r;i++){
    sum+=a[i];
  }
  
    cout<<sum<<endl;
  }

    return 0;
}