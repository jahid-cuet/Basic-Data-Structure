#include<bits/stdc++.h>
using namespace std;
void fun(int *p){
cout<<p;


}

int main()
{
  int val=10;
  int *ptr=&val;
  cout<<ptr<<endl;
  fun(ptr);
   
    return 0;
}