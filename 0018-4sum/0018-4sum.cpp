class Solution {
vector<vector<int>> ans;
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || nums[i] != nums[i-1]){
                for(int j = i+1; j < nums.size(); j++){
                    if(j == i+1 || nums[j] != nums[j-1]){
                        twoSum(nums,i,j,target);
                    }
                }
            }
        }
        return ans;
    }
    void twoSum(vector<int> nums, int i, int j, int target){
        int s = j+1, e = nums.size() - 1;
        while(s < e){
            long long int sum = (long) nums[i] + (long) nums[j] + (long) nums[s] + (long) nums[e];
            if(sum == target){
                ans.push_back({nums[i], nums[s], nums[e], nums[j]});
                while(s < e && nums[s] == nums[s+1]) s++;
                while(s < e && nums[e] == nums[e-1]) e--;
                s++;
                e--;
            }else if(sum > target) e--;
            else s++;
        }
    }
};