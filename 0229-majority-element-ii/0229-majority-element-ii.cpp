class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums)mp[x]++;
        
        vector<int> ans;
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second > nums.size()/3){
                ans.push_back(i->first);
            }
        }
        return ans;
    }
};