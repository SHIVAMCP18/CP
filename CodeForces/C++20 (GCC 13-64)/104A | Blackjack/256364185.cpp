#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
  int n;
  cin >> n;
 
  int q = n - 10;
  if(q <= 0 || q > 11){
    cout << "0" << endl;
  }
  else if(q == 10){
    cout << "15" << endl;
  }
  else if(q >= 1 && q <= 11){
    cout << "4" << endl;
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