/*Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a single line 
that contains the summation of all numbers from index L to index R

Examples
input Copy
6(n) 3(q)
6 4 2 7 2 7  array->a
1 3   ->testcase-1
3 6   ->testcase-2
1 6    ->testcase-3
outputCopy
12
18
28
*/
//Here the code execute within 1.5s.Time limit complexity of this code is ->

//The code::

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,q;
  cin>>n>>q;
  long long int a[n];      //1 2 3 4 5
  for(int i=0;i<n;i++){   //O(N)->Time Complexity.

 cin>>a[i];                //The lower index=l-1 that means lth value.
                             //The higher index=r-1 that means rth value
  }  
  long long int pre[n];
  pre[0]=a[0];
  for(int i=0;i<n;i++){   //O(N)
    pre[i]=a[i]+pre[i-1];
  }
  while(q--){               //O(logN)
  long long int l,r;
  cin>>l>>r;
  l--;
  r--;
  long long int sum;  
    if(l==0) sum=pre[r];

    else sum=pre[r]-pre[l-1];
  
    cout<<sum<<endl;
  }

    return 0;
}