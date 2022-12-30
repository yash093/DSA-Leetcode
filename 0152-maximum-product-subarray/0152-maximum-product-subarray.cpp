class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, temp = 1;
        for(int i = 0; i < nums.size(); i++){
            ans = max(ans,temp*=nums[i]);
            if(nums[i] == 0) temp = 1;
        }
        temp = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            ans = max(ans,temp*=nums[i]);
            if(nums[i] == 0) temp = 1;
        }
        return ans;
    }
};