class Solution {
public:
    int addDigits(int num) {
        int num_floor = floor((num - 1) / (9));
        int ans = num - 9 * num_floor;
        return ans;
    }
};