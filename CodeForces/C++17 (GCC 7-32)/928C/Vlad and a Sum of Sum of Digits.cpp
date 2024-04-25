#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
const int N = 2*1e5 + 7;
ll d[N] , ds[N] , ds1[N];
 
void solve(){
    int x;
    cin >> x;
    cout << ds1[x] << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 1 ; i < N ; i++){
        d[i] = i;
    }
    for(int i = 1 ; i < N ; i++){
        while(d[i] != 0){
            ds[i] = ds[i] + (d[i] % 10);
            d[i] = d[i] / 10;
        }
    }
    for(int i = 1 ; i < N ; i++){
        ds1[i] = ds1[i - 1] + ds[i];
    }
    int t;
    cin >> t;
    while(t--)
        solve();
}