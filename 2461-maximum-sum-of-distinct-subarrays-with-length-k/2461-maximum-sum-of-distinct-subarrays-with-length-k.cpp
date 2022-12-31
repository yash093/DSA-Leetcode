class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int s = 0, e = 0; 
        long long sum = 0, ans = 0;
        
        while(e < nums.size()){
            mp[nums[e]]++;
            sum += nums[e];
            
            if(e-s+1 == k){
                if(mp.size() == k){
                    ans = max(ans,sum);
                }
                sum -= nums[s];
                mp[nums[s]]--;
                if(mp[nums[s]] == 0) mp.erase(nums[s]);
                s++;
            }
            e++;
        }
        return ans;
    }
};