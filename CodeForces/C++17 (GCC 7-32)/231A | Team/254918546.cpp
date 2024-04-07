#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    int ans = 0;
 
    while(n--){
        int a[3];
        int ct = 0;
        for(int i = 0 ; i < 3 ; i++){
            cin >> a[i];
            if(a[i] == 1){
                ct++;
            }
        }
        if(ct >= 2){
            ans++;
        }
    }
    cout << ans << endl;
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