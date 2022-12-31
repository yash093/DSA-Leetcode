class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        for(int i = 0; i < s.size(); i++){
            string str = s.substr(i,10);
            mp[str]++;
        }
        vector<string> ans;
        for(auto x:mp){
            if(x.second > 1) ans.push_back(x.first);
        }
        return ans;
    }
};