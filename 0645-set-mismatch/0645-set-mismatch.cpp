class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i = 0; 
        while(i < nums.size()){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct]){
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            }else{
                i++;
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i+1){
                return {nums[i],i+1};
            }
        }
        return {-1,-1};
    }
};