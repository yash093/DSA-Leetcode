class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char,int> mp;
        int s = 0, e = 0, ans = 0;
        
        while(e < str.length()){
            mp[str[e]]++;
            if(e-s+1 > mp.size()){
                mp[str[s]]--;
                if(mp[str[s]] == 0) mp.erase(str[s]);
                s++;
            }
            ans = max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};