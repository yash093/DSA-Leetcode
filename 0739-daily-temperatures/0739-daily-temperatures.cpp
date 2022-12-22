class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int> temp;
        stack<pair<int,int>> st;
        
        int i = nums.size() - 1;
        while(i >= 0){
            if(st.empty()) temp.push_back(i);
            else if (!st.empty() && st.top().first > nums[i]) temp.push_back(st.top().second);
            else if(!st.empty() && st.top().first <= nums[i]){
                while(!st.empty() && st.top().first <= nums[i]){
                    st.pop();
                }
                if(st.empty()) temp.push_back(i);
                else temp.push_back(st.top().second);
            }
            st.push({nums[i],i});
            i--;
        }
        reverse(temp.begin(), temp.end());
        
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(temp[i] - i);
        }
        return ans;
    }
};