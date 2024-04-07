#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';  
#define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int M = 1e9 + 7 ;
 
int main(){
 
S_R
 
    int t;
    cin >> t;
 
    while(t--) {
        string s;
        cin >>s;
 
        int a=0,b=0;
 
        for(int i=0 ; i < 5 ;i++){
            if(s[i] == 'A'){
                a++;
            }
            else if(s[i] == 'B'){
                b++;
            }
        }
 
     if(a>b) {
      cout<<"A"<<endl;
  }
     else {
        cout<<"B"<<endl;
    }
    }
}
  