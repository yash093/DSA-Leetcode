class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mp;
        
        for(auto x:nums){
            mp[x]++;
        }
        
        for(auto i = mp.begin(); i!=mp.end(); i++){
            if(i->second == 1){
                ans += i->first;
            }
        }
        return ans;
    }
};