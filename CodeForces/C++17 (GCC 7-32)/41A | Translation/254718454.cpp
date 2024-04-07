#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
int check(string &a,string &b){
    for (int i = 0; i < a.size(); ++i)
    {
        if(b[i] == a[a.size() - i - 1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
 
void solve() {
    string a,b;
    cin >> a >> b;
 
    if(check(a,b)){
        cout << "YES" << endl;
    }
 
    else{
        cout << "NO" << endl;
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