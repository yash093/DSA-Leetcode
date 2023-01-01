class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        
        for(int i = nums.size()-1; i >= 0; i--) st.push(nums[i]);
        
        for(int i = nums.size()-1; i >= 0; i--){
            if(st.empty()) ans.push_back(-1);
            else if(!st.empty() && st.top() > nums[i]) ans.push_back(st.top());
            else if(!st.empty() && st.top() <= nums[i]) {
                while(!st.empty() && st.top() <= nums[i]){
                    st.pop();
                }
                if(!st.empty()) ans.push_back(st.top());
                else ans.push_back(-1);
            }
            st.push(nums[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};