class Solution {
public:
    int characterReplacement(string str, int k) {
        int ans = 0, temp = 0; //temp = for storing maximum consecutive elements
        unordered_map<char,int> mp;
        
        int s = 0, e = 0;
        while(e < str.length()){
            mp[str[e]]++;
            temp = max(temp,mp[str[e]]);
            if(e-s+1-temp > k){
                mp[str[s]]--;
                if(mp[str[s]]==0) mp.erase(str[s]);
                s++;
            }
            ans = max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};