class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ct = 0;
        vector<char> v1 , v2;
        map<char,int> m1 , m2;
        for(char i = 'a' ; i <= 'z' ; i++){
            m1[i] = 0;
            m2[i] = 0;
        }
        for(int i = 0 ; i < word.size() ; i++){
            char currentChar = word[i];
            if(currentChar >= 'a' && currentChar <= 'z'){
                v1.push_back(currentChar);
                m1[currentChar]++;
            }
            else{
                currentChar = tolower(currentChar);
                v2.push_back(currentChar);
                m2[currentChar]++;
            }
        }

        for(int i = 0 ; i < word.size() ; i++){
            if(m1[word[i]] >= 1 && m2[word[i]] >= 1){
                ct += 1;
                m1[word[i]] = 0;
                m2[word[i]] = 0;
            }
        }
        return ct;
    }
};