#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    string s;
    cin >> s;
 
    for(int i = 1 ; i <= 8 ; i++){
        if((s[1] - '0') != i){
            cout << s[0] << i << endl;
        }
    }
 
    for(char i = 'a' ; i <= 'h' ; i++){
        if(s[0] != i){
            cout << i << s[1] << endl;
        }
    }
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