class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;
        for(int i = 0 ; i < t.size() ; i++){
            m[t[i]]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]]--;
        }
        for(int i = 0 ; i < t.size() ; i++){
            if(m[t[i]] == 1) return t[i];
        }
        return 'a';
    }
};