class Solution {
public:
    int minimumRecolors(string nums, int k) {
        int s  = 0, e = 0, white = 0, ans = INT_MAX;
        while(e < nums.length()){
            if(nums[e] == 'W') white++;
            if(e-s+1 == k){
                ans = min(ans, white);
                if(nums[s] == 'W') white--;
                s++;
            }
            e++;
        }
        return ans;
    }
};