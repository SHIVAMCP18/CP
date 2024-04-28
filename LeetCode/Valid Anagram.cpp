class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        else{
            int a[s.size()] , b[t.size()];
            for(int i = 0 ; i < s.size() ; i++){
                a[i] = s[i] - 'a';
                b[i] = t[i] - 'a';   
            }
            sort(a , a + s.size());
            sort(b , b + t.size());
            bool flag = true;
            for(int i = 0 ; i < s.size() ; i++){
                if(a[i] != b[i]){
                    flag = false;
                }
            }
            if(flag) return true;
            return false;
        }
    }
};