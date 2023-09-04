class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char,int> jm;
        unordered_map<char,int> sm;
        
        
        for(auto x:jewels) jm[x]++;
        for(auto x:stones) sm[x]++;
        
        for(auto i = jm.begin(); i != jm.end(); i++){
            ans += sm[i->first];
        }
        return ans;
    }
};