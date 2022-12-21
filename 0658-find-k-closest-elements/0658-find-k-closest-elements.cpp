class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        vector<int> ans;
        
        priority_queue<pair<int,int>> maxh;
        for(int n:nums){
            maxh.push({abs(x-n),n});
            if(maxh.size() > k) maxh.pop();
        }
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};