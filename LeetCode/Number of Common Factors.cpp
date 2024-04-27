class Solution {
public:
    int commonFactors(int a, int b) {
        int N = 1e3 + 7;
        vector<int> divisors[N];
        for(int i = 1 ; i < N ; i++){
            for(int j = i ; j < N ; j += i){
                divisors[j].push_back(i);
            }
        }
        map<int,int> m;
        int ct = 0;
        for(int i = 0 ; i < divisors[a].size() ; i++){
            m[divisors[a][i]]++;
        }
        for(int i = 0 ; i < divisors[b].size() ; i++){
            m[divisors[b][i]]++;
        }
        for(int i = 0 ; i < m.size() ; i++){
            if(m[i] == 2) ct++;
        }
        return ct;
    }
};