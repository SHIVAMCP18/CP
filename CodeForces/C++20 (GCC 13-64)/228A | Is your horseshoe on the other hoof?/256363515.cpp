#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n = 4;
    vector<int>a(n);
    map<int,int>m;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        m[a[i]]++;
    }
    cout << n - m.size();
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