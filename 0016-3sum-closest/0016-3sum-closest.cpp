    class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            int ans = nums[0] + nums[1] + nums[nums.size()-1];
            sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size()-2; i++){
                int s = i + 1, e = nums.size() - 1;
                while(s < e){
                    int sum = nums[s] + nums[e] + nums[i];
                    if(sum > target) e--;
                    else s++;

                    if(abs(sum - target) < abs(ans - target)) ans = sum;
                }
            }
            return ans;
        }
    };