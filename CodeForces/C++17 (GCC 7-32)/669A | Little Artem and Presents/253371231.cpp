#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;
 
int main(){
 
S_R
    int n,ct=0;
    cin >> n;
 
    while(true){
        if(n!=0)
    {
        n-=1;
        ct++;
    }
        if(n>=2){
        n-=2;
        ct++;
    }
 
    else{
        break;
    }
}
 
    cout << ct << endl;
}