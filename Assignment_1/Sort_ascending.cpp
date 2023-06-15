/* Problem Statement
You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".
Sample Input -->
3
5
2 4 6 7 10
8
1 100 101 120 120 121 1000 1000
4
100 1 102 12
Sample Output -->
YES
YES
NO
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
  int n;
  cin>>n;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
cin>>a[i];
b[i]=a[i];
  }  
  int value=0;
  sort(a,a+n);
  for(int i=0;i<n;i++){
  if(b[i]==a[i]){
     value++;
  }
  }
  if(value==n){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
    return 0;
}