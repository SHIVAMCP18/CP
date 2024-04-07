#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    int a[2 * n];
 
    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> a[i];
    }
 
    vector<int> v;
    v.push_back(a[0]);
    for (int i = 1; i < 2 * n; ++i)
    {
        auto it = find(v.begin() , v.end() , a[i]);
        if(it != v.end()){
            continue;
        }
        else{
        v.push_back(a[i]);
        }
    }
 
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
 
        int t;
        cin >> t;
        while(t--)
            solve();
}