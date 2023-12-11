#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
    int N;
    cin >> N;

    
    list<int> myList;
    
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        myList.push_back(num);
    }
    
    myList.sort(greater<int>());
    myList.unique();
    for (int val:myList) {
        cout << val << " ";
    }
    }
    return 0;
}