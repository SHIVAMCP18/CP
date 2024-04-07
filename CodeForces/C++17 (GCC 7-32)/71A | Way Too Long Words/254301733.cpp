#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
 
    int n;
    cin >> n;
 
    while(n--){
    string s;
    cin >> s;
 
    if(s.size() > 10){
        cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    }
    else {
        cout << s << endl;
    }
}
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