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
        int n;
        cin >> n;
    vector<pair<int,int>> v(n);
    vector<pair<int,int>> v1(n);
 
    for(int i = 0; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }
 
    for (int i = 0; i < n; ++i)
    {
        if(v[i].first <= 10){
            v1[i].first = v[i].first;
            v1[i].second = v[i].second;
        }
    }
 
    sort(v1.begin(),v1.end(),cmp);
    for (int i = 0; i < n; ++i)
    {
        if(v1[0].second==v[i].second && v1[0].first==v[i].first){
            cout << i+1 << endl;
        }
    }
}
}