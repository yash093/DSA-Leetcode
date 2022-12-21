class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        
        int left  = searchElement(nums,target,0, pivot);
        int right = searchElement(nums,target,pivot+1,nums.size() - 1);
        
        if(left == -1){
            return right;
        }else{
            return left;
        }
        
    }
    
    int findPivot(vector<int> nums){
        int s = 0;
        int e = nums.size() - 1;
        
        while(s < e){
            int m = s +(e-s)/2;
            
            if(nums[m] > nums[s]){
                s = m;
            }else{
                e = m;
            }
        }
        return s;
    }
    
    int searchElement(vector<int> nums,int target, int s, int e){ //s = start index, e = end index.
        while(s<=e){
            int m = s +(e-s)/2;
            
            if(nums[m] == target){
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