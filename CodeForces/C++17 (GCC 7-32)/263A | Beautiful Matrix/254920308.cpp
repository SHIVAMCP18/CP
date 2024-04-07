#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
 
void solve() {
    int a[5][5];
 
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ;j++){
            cin >> a[i][j];
        }
    }
 
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ;j++){
            if(a[i][j] == 1){
                int c = (2 - i);
                int d = (2 - j);
                if(c < 0){
                    c*= -1;
                }
                if(d < 0){
                    d*= -1;
                }
                cout << c + d << endl;
                break;
            }
        }
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