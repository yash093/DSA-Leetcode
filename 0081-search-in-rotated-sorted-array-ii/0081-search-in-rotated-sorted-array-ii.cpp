class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //brute force approach
        for(auto x:nums){
            if(x == target)return true;
        }
        return false;
    }
};