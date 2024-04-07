#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int a,b,c,ct = 0;;
    cin >> a >> b >> c;
 
    while(b >= 2 && c >= 4 && a >= 1){
       a-= 1;
       b-= 2;
       c-= 4;
       ct++;
    }
 
    if(ct > 0){
        cout << 7 * ct << endl;
    }
 
    else{
        cout << "0" << endl;
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