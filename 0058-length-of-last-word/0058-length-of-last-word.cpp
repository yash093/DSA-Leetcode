class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, i = s.length()-1;
        while(i >= 0){
            if(s[i] != ' ')ans++;
            if(s[i] == ' ' && ans > 0) break;
            i--;
        }
        return ans;
    }
};