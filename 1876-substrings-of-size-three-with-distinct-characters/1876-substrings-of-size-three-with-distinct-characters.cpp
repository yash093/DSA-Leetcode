class Solution {
public:
    int countGoodSubstrings(string str) {
        int count = 0;
        for(int i = 2; i < str.length(); i++){
            if(str[i] != str[i-1] && str[i] != str[i-2] && str[i-1] != str[i-2]) count++;
        }
        return count;
    }
};