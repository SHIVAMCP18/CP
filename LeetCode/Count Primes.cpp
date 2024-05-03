class Solution {
public:
    int countPrimes(int n) {
        vector<bool> is_prime(n + 1 , 1);

        is_prime[0] = is_prime[1] = false;
        for(int i = 2 ; i * i <= n ; i++){
            if(is_prime[i] == true){
                for(int j = i * i ; j <= n ; j += i){
                    is_prime[j] = false;
                }
            }
        }
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            if(is_prime[i]) ct++;
        }
        return ct;
    }
};