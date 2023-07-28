#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == 'A') {
            st.push(c);
        } else { // c == 'B'
            if (st.empty()) {
                return false;
            } else if (st.top() == 'A') {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int i = 0; i < T; i++) {
        string s;
        cin >> s;
        if (isValid(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}