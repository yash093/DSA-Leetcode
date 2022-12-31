class Solution {
public:
    int maxVowels(string str, int k) {
        unordered_map<char,int> mp;
        string vowels = "aeiou";
        for(auto x:vowels) mp[x]++;
        
        int s = 0, e = 0, matched = 0, ans = 0;
        while(e < str.length()){
            if(mp.find(str[e]) != mp.end()){
                matched++;
            }
            if(e-s+1 == k){
                ans = max(ans,matched);
                if(mp.find(str[s]) != mp.end()) matched--;
                s++;
            }
            e++;
        }
        return ans;
    }
};