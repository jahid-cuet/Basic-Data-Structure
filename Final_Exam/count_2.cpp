#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> mp;
        int cnt = 0;
        int find_value = 0; 
        
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;

            if (mp[a[i]] > cnt || (mp[a[i]] == cnt && a[i] > find_value)) {
                cnt = mp[a[i]];
                find_value = a[i];
            }
        }

        cout << find_value << " " << cnt << endl;
    }

    return 0;
}