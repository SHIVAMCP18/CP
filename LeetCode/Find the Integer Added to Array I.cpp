class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        int ans = 0;
        bool flag = false;
        for(int i = 0 ; i < nums2.size() ; i++){
            m[nums2[i]]++;
        }
        for(int i = -1000 ; i <= 1000 ; i++){
            for(int j = 0 ; j < nums1.size() ; j++){
                if(m[nums1[j] + i] >= 1){
                    flag = true;
                    m[nums1[j] + i]--;
                    ans = i;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag) return ans;
            for(int i = 0 ; i < nums2.size() ; i++){
                m[nums2[i]]++;
            }
        }
        return 0;
    }
};