#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    m[0] = 1;

    int ct = 0;
    int sum = 0;

    for(int i = 0 ; i < n ; i++) {
        sum += v[i];

        int rem = sum % k;

        if(rem < 0) rem += k;
        if(m.find(rem) != m.end()) {
            ct += m[rem];
        }
        m[rem]++;
    }
    return ct;
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    cout << subarraysDivByK(v , )
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int T = 1;
    // cin >> T;
 
    while(T--)
        solve();
}