class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int s = 0, e = 0, temp = 1, ans = 0;
        while(e < nums.size()){
            temp *= nums[e];
            while(s <= e && temp >= k){
                temp /= nums[s];
                s++;
            }
            ans += (e-s+1);
            e++;
        }
        return ans;
    }
};