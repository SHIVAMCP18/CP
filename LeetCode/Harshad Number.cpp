class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        while(x){
            sum += x % 10;
            x = x / 10;
        }
        if(temp % sum == 0) return sum;
        return -1;
    }
};