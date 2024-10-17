class Solution {
public:
    
int maximumSwap(int num) {
    string s = to_string(num);
    string t = to_string(num);

    sort(t.begin() , t.end() , greater<int> ());

    bool flag = true;
    int i = 0;
    while(flag) {
        if(i == s.size()) break;
        if(s[i] - '0' > t[i] - '0') {
            break;
        }
        else if(s[i] - '0' < t[i] - '0') {
            string s1 = s;
            reverse(s1.begin() , s1.end());
            int j = s1.size() - s1.find(t[i]) - 1;
            swap(s[i] , s[j]);
            flag = false;
        }
        else {
            i++;
        }
    }
    int ans = stoi(s);
    return ans;
}

};

//Time Complexity - O(nlogn)