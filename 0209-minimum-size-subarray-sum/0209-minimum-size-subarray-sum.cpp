class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, ans = INT_MAX;
        int s = 0, e = 0;
        
        while(e < nums.size()){
            sum += nums[e];
            while(sum >= target){
                ans = min(ans,e-s+1);
                sum -= nums[s];
                s++;
            }
            e++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};