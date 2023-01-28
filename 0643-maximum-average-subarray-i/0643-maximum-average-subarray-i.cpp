class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s = 0; // s = start index
        int e = 0; //e = end index
        
        double sum = 0;
        double ans = INT_MIN;
        
      
        
        while(e < nums.size()){
            sum += nums[e];
            if(e-s+1<k){
                e++;
            }
            else if(e-s+1 == k){
                ans = max(sum, ans);
                sum -= nums[s];
                s++;
                e++;
            }
        }
        return ans/k;
    }
};