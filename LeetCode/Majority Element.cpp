class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int ans;
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums.size() % 2 == 0){
                if(m[nums[i]] >= nums.size() / 2){
                    ans = nums[i];
                    break;
                }
            }
            else{
                if(m[nums[i]] >= nums.size() / 2 + 1){
                    ans = nums[i];
                    break;
                }
            }
        }
        return ans;
    }
};