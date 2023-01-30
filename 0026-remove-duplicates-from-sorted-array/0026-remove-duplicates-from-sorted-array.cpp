class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1; //this isnext non duplicate
        for(int i = 1; i < nums.size(); i++){
            if(nums[ans-1] != nums[i]){
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};