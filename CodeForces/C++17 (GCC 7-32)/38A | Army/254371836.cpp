#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >>n;
    int d[n-1],a,b,y=0;
 
    for(int i = 0; i < n - 1 ; i++){
        cin >> d[i];
    }
    cin >> a >> b;
    for(int i = a - 1 ; i < b - 1 ; i++){
        y+= d[i];
    }
 
    cout << y << endl;
}
 
 
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        //int t;
        ///cin >> t;
        //while(t--)
            solve();
}