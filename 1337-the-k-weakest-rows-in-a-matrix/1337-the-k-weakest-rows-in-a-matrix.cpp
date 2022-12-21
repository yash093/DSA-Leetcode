class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> maxh;
        for(int i = 0; i < mat.size(); i++){
            int count = 0;
            for(int x:mat[i]){
                if(x == 1) count++;
            }
            maxh.push({count,i});
            if(maxh.size() > k) maxh.pop();
        }
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};