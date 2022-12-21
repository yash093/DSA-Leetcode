class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>> maxh;
        
        for(auto x:nums){
            maxh.push({x[0]*x[0] + x[1]*x[1], {x[0],x[1]}});
            if(maxh.size() > k) maxh.pop();
        }
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};