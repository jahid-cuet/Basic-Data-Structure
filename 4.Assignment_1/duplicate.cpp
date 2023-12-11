
/*Problem Statement -->

You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Sample Input->

5
1 2 3 4 5
Sample Output->
NO 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  bool flag=false;
  for(int i=0;i<n-1;i++){
  for(int j=i+1;j<n;j++)
     if(a[i]==a[j]){
           flag=true;
        }
       
  }
  if(flag==true) cout<<"YES";
  else cout<<"NO";
  return 0;
}