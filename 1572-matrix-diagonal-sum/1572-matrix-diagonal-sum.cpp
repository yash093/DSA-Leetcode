class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        if(nums.size() % 2 == 0) return sum(nums);
        return sum(nums) - nums[nums.size()/2][nums.size()/2];
    }
    int sum(vector<vector<int>> nums){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum +=  nums[i][i];
        }
        for(int i = nums.size()-1; i >= 0; i--){
            sum += nums[i][(nums.size()-1)-i];
        }
        return sum;
    }
};