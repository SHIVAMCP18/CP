#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const int M = 1e9 + 7;
 
int main() {
    S_R;
    int t;
    cin >> t;
 
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
 
        if(a + b >= 10 || a + c >= 10 || b + c >= 10){
            cout << "YES" << endl;
        }
 
        else{
            cout << "NO" << endl;
        }
    }
}