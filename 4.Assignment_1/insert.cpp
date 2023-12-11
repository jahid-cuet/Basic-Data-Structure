/*Problem Statement

You will given an integer array A of size N and another array B of size M. Also you will be given an index X. You need to insert the whole array B to the index X of array A.
Output the final array A.
Sample Input -->
5
2 3 4 5 6
3
10 20 30
3
Sample Output-->
2 3 4 10 20 30 5 6 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int m;
  cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
    cin>>b[i];
  }
  int x;
  cin>>x;
  a.insert(a.begin()+x,b.begin(),b.end());
  for(int y:a){
    cout<<y<<" ";
  }

    return 0;
}