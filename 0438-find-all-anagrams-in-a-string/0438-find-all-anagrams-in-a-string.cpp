class Solution {
public:
    vector<int> findAnagrams(string str, string ptr) {
        vector<int> ans;
        unordered_map<char,int> mp;
        int s = 0, e = 0, matched = 0;
        
        for(auto x:ptr) mp[x]++;
        
        while(e < str.length()){
            if(mp.find(str[e]) != mp.end()){
                mp[str[e]]--;
                if(mp[str[e]] == 0){
                    matched++;
                }
            }
            
            if(matched == mp.size()){
                ans.push_back(s);
            }
            
            if(e >= ptr.length()-1){
                char sChar = str[s++];
                if(mp.find(sChar) != mp.end()){
                    if(mp[sChar] == 0){
                        matched--;
                    }
                    mp[sChar]++;
                }
            }
            e++;
        }
        return ans;
    }
};