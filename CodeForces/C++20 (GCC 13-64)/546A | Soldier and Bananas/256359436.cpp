#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int k,n,w,sum = 0;
    cin >> k >> n >> w;
 
    for(int i = 1 ; i <= w ; i++){
        sum+= i*k;
    }
    if(sum < n){
        cout << "0" << endl;
    }
    else{
        cout << sum - n;
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