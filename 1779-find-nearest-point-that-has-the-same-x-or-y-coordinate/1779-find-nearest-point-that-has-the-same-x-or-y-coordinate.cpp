class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& nums) {
        int ans = -1, minDis = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i][0] == x || nums[i][1] == y){
                if(abs(nums[i][0] - x) + abs(nums[i][1] - y) < minDis){
                     minDis = abs(nums[i][0] - x) + abs(nums[i][1] - y);
                     ans = i;
                }
            }
        }
        return ans;
    }
};