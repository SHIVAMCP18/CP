class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long reverse = 0;
        if(x < 0) return false;
        else{
            while(x){
                 int rem = x % 10;
                 reverse = 10 * reverse + rem;
                 x = x / 10;
            }
        }
        return temp == reverse;
    }
};