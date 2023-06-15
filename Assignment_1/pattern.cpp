/* Problem Statement

You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.
5
Sample Output 0

\   /
 \ / 
  X  
 / \ 
/   \
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  if(n%2!=0){

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==(n/2) && j==(n/2)) cout<<"X";
        else if(i==j){
            cout<<"\\";
        }
        else if(i+j==n-1){
            cout<<"/";
        }

        else{
    cout<<" ";
        }
       

    }
    cout<<endl;

}

  }  
    return 0;
}