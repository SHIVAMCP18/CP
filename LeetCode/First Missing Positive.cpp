class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> v(nums.size());
        map<int , int> m;
        int ans;
        bool flag = true;
        for(int i = 0 ; i < nums.size() ; i++){
            v[i] = i + 1;
            m[nums[i]]++;
        }
        for(int i = 0 ; i < v.size() ; i++){
            if(m[v[i]] == 0){
                ans = v[i];
                flag = false;
                break;
            }
        }
        if(flag){
            return nums.size() + 1;
        }
        return ans;
    }
};