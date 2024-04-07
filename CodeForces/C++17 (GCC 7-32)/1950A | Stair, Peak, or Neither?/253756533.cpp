    #include <bits/stdc++.h>
    using namespace std;
 
    #define endl '\n'
    #define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
    int main() {
        S_R;
      int t;
      cin >> t;
 
      while(t--){
        int a,b,c;
        cin >> a >> b >> c;
 
        if(a < b && b < c){
            cout << "STAIR" << endl;
        }
 
        else if(a < b && b > c){
            cout << "PEAK" << endl;
        }
 
        else{
            cout << "NONE" << endl;
        }
      }
    }
    