#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    string s;
    cin >> s;
 
    if(s[0] != toupper(s[0])){
    s[0] = 'A' + (s[0] - 'a');
}
    cout << s << endl; 
}
 
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        //int t = 1;
       // cin >> t;
        //while(t--)
            solve();
}