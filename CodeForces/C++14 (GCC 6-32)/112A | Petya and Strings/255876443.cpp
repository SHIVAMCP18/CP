#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    string a,b;
    cin >> a >> b;
 
    for(int i = 0 ; i < a.size() ; i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
 
    if(a > b){
        cout << "1" << endl;
    }
    else if(a < b){
        cout << "-1" << endl;
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