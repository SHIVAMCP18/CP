    #include <bits/stdc++.h>
    using namespace std;
     
    #define endl '\n'
    #define ll long long
 
    bool cmp(int a , int b){
        return a < b;
    }
    bool cmp1(int a , int b){
        return a > b;
    }
 
    void solve() {
        int n;
        cin >> n;
        vector<int>v(n);
 
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        for(int i = 0 ; i < n ; i++){
            if(v.size() == 1){
                break;
            }
            if(i % 2 == 0){
                sort(v.begin() , v.end() , cmp);
                v.pop_back();
            }
            if(i % 2 != 0){
                sort(v.begin() , v.end() , cmp1);
                v.pop_back();
            }
        }
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i];
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