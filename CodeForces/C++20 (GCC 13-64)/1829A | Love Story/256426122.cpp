#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    string s = "codeforces";
    string s1;
    cin >> s1;
    int ct = 0;
 
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != s1[i]){
            ct++;
        }
    }
    cout << ct << endl;
}
 
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        int t;
        cin >> t;
        while(t--)
           solve();
}