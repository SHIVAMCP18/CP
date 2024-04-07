#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    ll q;
    cin >> q;
 
    while(q--){
        ll n,ct=0;
        cin >> n;
        while(true){
            if(n % 2 == 0 ){
                n = n / 2;
                ct++;
            }
            else if(n % 3 == 0 ){
                n = 2 * n / 3;
                ct++;
            }
            else if(n % 5 == 0 ){
                n = 4 * n / 5;
                ct++;
            }
        
            else{
                break;
            }
        }
        if(n == 1){
        cout << ct << endl;
    }
 
    else{
        cout << "-1" << endl;
    }
    }
}
 
 
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        //int t;
        //cin >> t;
        //while(t--)
            solve();
}