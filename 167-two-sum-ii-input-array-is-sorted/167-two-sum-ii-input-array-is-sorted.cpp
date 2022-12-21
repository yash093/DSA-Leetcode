class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        
        while(s < e){
            if(nums[s] + nums[e] > target){
                e--;
            }else if(nums[s] + nums[e] < target){
                s++;
            }else{
                return vector<int> {s+1,e+1};
            }
        }
        return vector<int> {-1,-1};
    }
};