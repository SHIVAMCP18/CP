#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n,ct = 0; 
    cin >> n;
 
    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i + j == n && i % 2 == 0 && j % 2 == 0){
                cout << "YES" << endl;
                ct++;
                break;
            }
        }
        if(ct == 1){
            break;
        }
    }
    if(ct == 0){
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