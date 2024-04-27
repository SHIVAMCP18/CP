class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int N = 1e6 + 7;
        vector<bool> is_prime(N , 1);
        is_prime[0] = is_prime[1] = false;
        for(int i = 2 ; i < N ; i++){
            if(is_prime[i] == true){
                for(int j = 2 * i ; j < N ; j += i){
                    is_prime[j] = false;
                }
            }
        }
        vector<int> v;
        for(int i = left ; i <= right ; i++){
            if(is_prime[i] == true){
                v.push_back(i);
            }
        }
        if(v.size() < 2){
            return {-1 , -1};
        }
        int a[2];
        int mindiff = right - left + 1;
        for(int i = 0 ; i < v.size() - 1; i++){
            int diff = v[i + 1] - v[i];
            if(diff < mindiff){
                mindiff = diff;
                a[1] = v[i + 1];
                a[0] = v[i];
            }
        }
        return {a[0] , a[1]};
    }
};