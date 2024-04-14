#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;
 
    map<int,int> m;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int i = 0;
    for(int i = 0 ; i < n ; i++){
        m[v[i]]++;
    }
    bool flag = true;
    for(int i = 0 ; i < n ; i++){
        if(m[v[i]] == 1){
            cout << v[i] << endl;
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << v[0] << endl;
    }
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