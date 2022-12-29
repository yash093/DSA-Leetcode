class Solution {
public:
    int hIndex(vector<int>& nums) {
        int s = 0, n = nums.size(), e = n - 1;
        while(s <= e){
            int m = s +(e-s)/2;
            if(nums[m] == n-m) return nums[m];
            else if(nums[m] > n-m) e = m - 1;
            else s = m + 1;
        }
        return n-s;
    }
};