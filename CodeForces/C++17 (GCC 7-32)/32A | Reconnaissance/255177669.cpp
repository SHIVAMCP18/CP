#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n,d,ct = 0;
    cin >> n >> d;
 
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                if(max(a[i] , a[j])  - min(a[i] , a[j]) <= d){
                    ct++;
                }
            }
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