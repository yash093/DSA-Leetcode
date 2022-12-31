class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> minh;
        
        for(int x:nums) minh.push(x);
        
        while(!minh.empty()){
            ans.push_back(minh.top());
            minh.pop();
        }
        return ans;
    }
};