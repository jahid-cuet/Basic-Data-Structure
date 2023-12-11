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

sort(a,a+n);

int l=0;
int r=n-1;
int x;
int value;
cin>>x;

while(l<=r){
int mid=(l+r)/2;
if(a[mid]==x){
value++;
    break;
}

if(a[mid]<x){
l=mid+1;
}
else{
    r=mid-1;
}

}
if(value>1) cout<<"YES";
else cout<<"NO";
    return 0;
}