#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
 
    int n,k,ct=0;
    cin >> n >> k;
 
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
 
    for(int i = 1; i <= n ; i++){
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
 
        //int t = 1;
       // cin >> t;
        //while(t--)
            solve();
}