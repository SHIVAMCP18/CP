#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    string s;
    cin >> s;
 
    for(int i = 0 ; i < s.size() ;){
        if(s[i] == '.'){
            cout << "0";
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            cout << "1";
            i = i + 2;
        }
        else{
            cout << "2";
            i = i + 2;
        }
    }
}
 
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        int t = 1;
        //cin >> t;
        while(t--)
           solve();
}