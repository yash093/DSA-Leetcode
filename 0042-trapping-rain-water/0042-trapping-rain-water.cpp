class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), mxl[n], mxr[n];
        
        int temp1 = INT_MIN;
        for(int i = 0; i < n; i++){
            temp1 = max(temp1,height[i]);
            mxl[i] = temp1;
        }
        
        int temp2 = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            temp2 = max(temp2,height[i]);
            mxr[i] = temp2;
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += min(mxr[i],mxl[i]) - height[i];
        }
        return ans;
    }
};