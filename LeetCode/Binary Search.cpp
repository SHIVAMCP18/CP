class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size() - 1;
        long long  mid;
        while(r - l > 1){
            mid = l + (r - l) / 2;
            if(nums[mid] > target){
                r = mid - 1;
            }
            else{
                l = mid;
            }
        }
        if(nums[l] == target) return l;
        if(nums[r] == target) return r;
        else return -1;
    }
};