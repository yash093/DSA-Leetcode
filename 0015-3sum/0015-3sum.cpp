class Solution {
vector<vector<int>> ans;
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || nums[i-1] != nums[i]){
                twoSum(i+1, nums.size()-1, nums, -nums[i]);
            }
        }
        return ans;
    }
    void twoSum(int s, int e, vector<int> nums, int target){
        int i = nums[s-1];
        while(s < e){
            if(nums[s] + nums[e] == target){
                ans.push_back({i,nums[s],nums[e]});
                
                while(s < e && nums[s] == nums[s+1]) s++;
                while(s < e && nums[e] == nums[e-1]) e--;
                s++;
                e--;
            }else if(nums[s] + nums[e] > target) e--;
             else s++;
        }
    }
};















