    #include <bits/stdc++.h>
    using namespace std;
 
    #define endl '\n'
    #define ll long long
    #define S_R ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
    int main() {
        S_R;
        int t;
        cin >> t;
 
        while(t--){
            int n;
            cin >> n;
 
            for (int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; j++){
                    if((i + j) % 2 == 0){
                        cout << "##";   
                    }
 
                    else{
                        cout << "..";
                    }
                }
                cout << endl;
 
                for(int j = 0; j < n; j++){
                    if((i + j) % 2 == 0){
                        cout << "##";   
                    }
 
                    else{
                        cout << "..";
                    }
                }
                cout << endl;
            }
        }
    }
    