class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int ans = 0, sum = 0,  s = 0, e = 0;
        
        while(e < nums.size()){
            sum += nums[e];
            if(e-s+1 == k){
                if(sum/k >= threshold){
                    ans++;
                }
                sum -= nums[s];
                s++;
            }
            e++;
        }
        return ans;
    }
};