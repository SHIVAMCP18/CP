#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    double a[n];
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i] = a[i] / 100;
        sum+= a[i];
    }
 
    cout << setprecision(14) << (sum / n) * 100 << endl;
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