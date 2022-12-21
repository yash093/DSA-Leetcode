class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0; // s = start index 
        int e = nums.size() - 1; // e = end index 
        
        while(s <= e){
            int m = s + (e-s)/2; //m = mid index 
            
            if(target == nums[m]){
                return m;
            }else if(target > nums[m]){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return -1;
    }
};