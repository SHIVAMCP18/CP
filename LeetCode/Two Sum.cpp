class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0 ; i < nums.size() ; i++){
            v.push_back(target - nums[i]);
        }   
        int a[2];
        for(int i = 0 ; i < nums.size() ; i++){
            if(v[i] + nums[i] == target){
                a[0] = i;
                int fin = v[i];
                auto it = find(nums.begin() + i + 1 , nums.end() , fin);
                if(it != nums.end()){
                    a[1] = it - nums.begin();
                    return {a[0] , a[1]};
                }
            }
        }
        return {0,0};
}
};