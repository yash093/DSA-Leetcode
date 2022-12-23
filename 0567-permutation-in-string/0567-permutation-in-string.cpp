class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s = 0, e = 0, matched = 0;
        unordered_map<char,int> mp;
        for(auto x:s1) mp[x]++;
        
        while(e < s2.size()){
            if(mp.find(s2[e]) != mp.end()){
                mp[s2[e]]--;
                if(mp[s2[e]] == 0){
                    matched++;
                }
            }
            if(matched == mp.size()){
                return true;
            }
           if (e >= s1.length() - 1)
            { 
               char sChar = s2[s++];
                if (mp.find(sChar) != mp.end())
                {
                    if (mp[sChar] == 0)
                    {
                        matched--; 
                    }
                    mp[sChar]++;
                }
            }
            e++;
        }
        return false;
    }
};