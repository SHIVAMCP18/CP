class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        int i = 0;
        while(true){
            if(pow(3 , i) == n) return true;
            i++;
            if(pow(3 , i) > n) return false;
        }
    }
};