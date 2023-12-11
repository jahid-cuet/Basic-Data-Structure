#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
    string sentence;

    getline(cin,sentence);
    string word;
    string find_word;
    stringstream ss(sentence);
    map<string, int> mp;
    int cnt=0;
    while (ss >> word)
    {
        mp[word]++;

        if (mp[word] >cnt) {
            cnt = mp[word];
            find_word = word;
        }
    }
    cout << find_word <<" "<<cnt<< endl;
    }
    return 0;
}