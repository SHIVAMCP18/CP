class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        bool flag = false;
        for(int i = 0 ; i < s.size() ; i++){
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z'){
                v.push_back(s[i]);
            }
            if(s[i] - '0' >= 0 && s[i] - '0' <= 9){
                v.push_back(s[i] - '0');
            }
        }
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i] == v[v.size() - i - 1]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(v.size() == 0) return true;
        if(flag) return true;
        return false;
    }
};