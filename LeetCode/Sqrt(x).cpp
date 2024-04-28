class Solution {
public:
    int mySqrt(int x) {
        double exp = 1e-7;
        double l = 1 , r = x;
        double mid;
        while(r - l > exp){
            mid = l + (r - l) / 2;
            if(mid * mid < x){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        if(l * l == x) return l;
        return r;
    }
};