class Solution {
public:
    bool isPowerOfTwo(int n) {
        //Logic - An integer n is a power of two , if count of set bit is equal to 1..
        int set_bit_ct = 0;
        if(n < 0) return false;
        while(n){
            set_bit_ct += (n & 1);
            n = n >> 1;
        }

        return set_bit_ct == 1; 
    }
};