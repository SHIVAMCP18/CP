#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;
 
int main(){
 
S_R
    int t;
    cin >> t;
    while(t--){
        int n,l_b=0;
        cin >> n;
 
        int f_b = n;
 
        string s;
        cin >> s;
 
        for(int i = 0; i < n; i++){
            if(s[i]=='B'){
                f_b = min(f_b,i);
                l_b = max(0,i);
            }
        }
        cout << l_b - f_b + 1 << endl;
    }
}