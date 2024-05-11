class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() <= 1){
            return;
        }
        reversestring(0 , s , s.size());
    }

private:
    void reversestring(int i , vector<char> &s , int n){
        if(i >= n / 2){
            return;
        }
        swap(s[i] , s[n - i - 1]);
        reversestring(i + 1 , s , s.size());
    }
};