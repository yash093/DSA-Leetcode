class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int matched = 0;
        
        if(s.length() != t.length()) return false;
        
        for(auto x:s)mp[x]++;
        
        for(int i = 0; i < s.length(); i++){
            if(mp.find(t[i]) != mp.end()){
                mp[t[i]]--;
                if(mp[t[i]] == 0) matched++;
            }
        }
        if(matched == mp.size()) return true;
        return false;
    }
};