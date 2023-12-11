#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
   priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        pq.push(num);
    }
int Q;
cin>>Q;
    while (Q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); 
            cout<<pq.top()<<endl;
        }
        else if (c == 1)
        {
            cout << pq.top() << endl;
        }
        else if (c == 2)
        {
            
             pq.pop(); // O(1)
             if(pq.empty()) cout<<" Empty"<<endl;
            else
              cout << pq.top() << endl;
        }
        
    }
    return 0;
}
    