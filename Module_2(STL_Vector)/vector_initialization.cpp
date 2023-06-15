#include<bits/stdc++.h>
using namespace std;
int main()
{
 //vector<int>v;       ->  type_1
 //vector<int>v(5);    -> type_2

  /*vector<int>v(5,2); ->type_3 
  for(int x:v){
  cout<<x;  }  (ans->22222)*/


  /*vector<int>v;  type ->3
  vector<int>v2(v); Copy  v in v2 */

   //int a[6]={1,2,3,4,5,6}; type->5
    //vector<int> v(a,a+6);
    vector<int> v={2,10,3};   // type->6
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;


    return 0;
}