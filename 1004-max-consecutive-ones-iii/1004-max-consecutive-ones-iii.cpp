class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s = 0, e = 0, ans = 0, maxOnesCount = 0;
        while(e < nums.size()){
            if(nums[e] == 1) maxOnesCount++;
            if(e-s+1 - maxOnesCount > k){
                if(nums[s] == 1) maxOnesCount--;
                s++;
            }
            ans = max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};