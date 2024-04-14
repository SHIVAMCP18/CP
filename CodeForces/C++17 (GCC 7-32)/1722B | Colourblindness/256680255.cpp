#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    string a , b;
    cin >> a >> b;
    bool flag = true;
    int ri = 0;
 
    for(int i = 0 ; i < n ; i++){
        if((a[i] == b[i]) || (a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B'))
        {
            flag = true;
        }
        else{
            flag = false;
        }
        if(flag == false){
            cout << "NO" << endl;
            ri = 1;
            break;
        }
    }
    if(ri == 0){
        cout << "YES" << endl;
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