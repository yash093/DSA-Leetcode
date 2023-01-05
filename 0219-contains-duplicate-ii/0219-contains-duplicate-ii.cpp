class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int s = 0, e = 0;
        
        while(e < nums.size()){
            mp[nums[e]]++;
            if(e-s > k){
                mp[nums[s]]--;
                if(mp[nums[s]] == 0) mp.erase(nums[s]);
                s++;
            }
            
            if(mp.size() <= e-s){
                return true;
            }
            e++;
        }
        return false;
    }
};