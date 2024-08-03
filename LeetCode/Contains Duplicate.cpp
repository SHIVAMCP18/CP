class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        if(m.size() != nums.size()) return true;
        return false;
    }
};