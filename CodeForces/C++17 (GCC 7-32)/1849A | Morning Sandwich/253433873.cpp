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
 
        int sc = 0;
        bool flag = true;
 
        while(true){
        if(a>=2 && b>=1 && flag){
        a-= 1;
        sc+= 1;
        b-= 1;
        sc++;
        a-=1;
        sc++;
        flag = false;
    }
 
        if(a>=1 && c>=1){
        c-=1;
        sc++;
        a-=1;
        sc++;
    }
 
    if(a>=1 && b>=1){
        b--;
        sc++;
        a--;
        sc++;
    }
     else if(a==0 || (b==0 && c==0)){
        break;
    }
}
    cout << sc << endl;
    }
}