#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
 
bool cmp(pair<int,int> a , pair<int,int> b){
 
    return a.second > b.second;
}
 
int main() {
    S_R;
    int t;
    cin >>t ;
 
    while(t--){
    int a,b,c;
    cin >> a >> b >> c;
 
    if(a==b){
        cout << c << endl;
    }
 
    else if(b==c){
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
 }
}