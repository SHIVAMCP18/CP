#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
   int n;
   cin >> n;
   int a[n];
 
   for (int i = 0; i < n; ++i)
   {
       cin >> a[i];
   }
 
   sort(a,a + n);
   int max = a[n-1];
   int sum = 0;
 
   for(int i = 0 ; i < n ; i++){
    sum+= max - a[i];
   }
   cout << sum << endl;
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