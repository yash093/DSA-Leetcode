class Solution {
public:
    int maxConsecutiveAnswers(string str, int k) {
        int ans = 0, temp = 0; //temp = maximum continous T or F
        int s = 0, e = 0;
        unordered_map<char,int> mp;
        
        while(e < str.length()){
            mp[str[e]]++;
            temp = max(temp,mp[str[e]]);
            if(e-s+1 - temp > k){
                mp[str[s]]--;
                s++;
            }
            ans = max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};