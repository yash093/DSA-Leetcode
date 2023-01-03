class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int s = 0, e = 0, onesCount = 0, ans = 0;
        while(e < nums.size()){
            if(nums[e] == 1) onesCount++;
            if((e-s+1) - onesCount > 1){
                if(nums[s] == 1) onesCount--;
                s++;
            }
            ans = max(e-s+1,ans);
            e++;
        }
        return ans-1;
    }
};