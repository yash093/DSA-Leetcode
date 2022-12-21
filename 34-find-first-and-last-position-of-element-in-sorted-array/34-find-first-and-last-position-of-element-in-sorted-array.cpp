class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = searchInLeft(nums,target);
        int b = searchInRight(nums,target);
        
        vector<int> ans;
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
    }
    
    
    int searchInLeft(vector<int> nums,int target){
        int ans = -1;
        
        int s = 0;
        int e = nums.size() - 1;
        
        while(s <= e){
            int m = s+(e-s)/2; //m = mid element
            if(target == nums[m]){
                ans = m;
                e = m - 1;
            }else if(target > nums[m]){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return ans;
    }
    
    int searchInRight(vector<int> nums,int target){
        int ans = -1;
        
        int s = 0;
        int e = nums.size() - 1;
        
        while(s <= e){
            int m = s +(e-s)/2;
            
            if(target == nums[m]){
                ans = m;
                s =  m + 1;
            }else if(target > nums[m]){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return ans;
    }
};