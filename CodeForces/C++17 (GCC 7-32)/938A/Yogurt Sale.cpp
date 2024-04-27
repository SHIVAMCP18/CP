#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve(){
    int n , a , b;
    cin >> n >> a >> b;
    int op = 1  , tp = 0;
    op = a * n;
    while(n >= 2){
        if(n % 2 == 0){
            tp = tp + b;
            n -= 2;
        }
        else{
            tp = tp + a;
            n--;
        }
    }
    if(n == 1) cout << a << endl;
    else cout << min(op , tp) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
}