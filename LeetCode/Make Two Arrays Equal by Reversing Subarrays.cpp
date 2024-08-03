class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        int map[1001];
        memset(map , 0 , sizeof(map));
        for(int i = 0 ; i < n ; i++) {
            map[target[i]]++;
            map[arr[i]]--;
        }
        for(int i = 0 ; i < n ; i++){
            if(map[arr[i]] != 0) {
                return false;
            }
        }
        return true;
    }
};