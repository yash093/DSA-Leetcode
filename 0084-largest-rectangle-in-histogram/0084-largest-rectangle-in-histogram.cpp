class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        stack<pair<int,int>> st;
        //for left 
        vector<int> left;
        for(int i = 0; i < nums.size(); i++){
            if(st.empty())left.push_back(-1);
            else if(!st.empty() && st.top().first < nums[i])left.push_back(st.top().second);
            else if(!st.empty() && st.top().first >= nums[i]){
                while(!st.empty() && st.top().first >= nums[i]){
                    st.pop();
                }
                if(!st.empty())left.push_back(st.top().second);
                else left.push_back(-1);
            }
            st.push({nums[i],i});
        }
        
        while(!st.empty()) st.pop(); //emptying the stack 
        
        //for right side
        vector<int> right;
        for(int i = nums.size()-1; i >= 0; i--){
            if(st.empty()) right.push_back(nums.size());
            else if(!st.empty() && st.top().first < nums[i]) right.push_back(st.top().second);
            else if(!st.empty() && st.top().first >= nums[i]){
                while(!st.empty() && st.top().first >= nums[i]){
                    st.pop();
                }
                if(!st.empty()) right.push_back(st.top().second);
                else right.push_back(nums.size());
            }
            st.push({nums[i],i});
        }
        reverse(right.begin(), right.end());
        
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            ans = max(ans,(right[i] - left[i] - 1)*nums[i]);
        }
        return ans;
    }
};