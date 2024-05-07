class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp(k);
        for(int i = 0 ; i < k ; i++){
            temp[i] = nums[nums.size() - k + i];
        }
        for(int i = nums.size() - 1; i >= k; i--){
            nums[i] = nums[i - k];
        }
        for(int i = 0; i < k ; i++){
            nums[i] = temp[i];
        }
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp(k);
        for(int i = 0 ; i < k ; i++){
            temp[i] = nums[nums.size() - k + i];
        }
        for(int i = nums.size() - 1; i >= k; i--){
            nums[i] = nums[i - k];
        }
        for(int i = 0; i < k ; i++){
            nums[i] = temp[i];
        }
    }
};
