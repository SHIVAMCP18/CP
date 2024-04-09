#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n,k;
    cin >> n >> k;
    int a[n];
    int ct = 0;
 
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
 
    for (int i = 1; i <= n ; ++i)
    {
        if(a[i] >= a[k] && a[i] > 0){
            ct++;
        }
    }
    cout << ct << endl;
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