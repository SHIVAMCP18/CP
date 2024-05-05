class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        while(i != nums.size() + 1){
            auto it = find(nums.begin() , nums.end() , i);
            if(it == nums.end()){
                return i;
            }
            i++;
        }
        return 0;
    }
};