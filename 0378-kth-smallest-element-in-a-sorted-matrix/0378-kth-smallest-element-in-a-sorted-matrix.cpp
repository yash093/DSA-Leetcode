class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxh;
        for(int i = 0; i < matrix.size(); i++){
            for(int x:matrix[i]){
                maxh.push(x);
                if(maxh.size() > k){
                    maxh.pop();
                }
            }
        }
        return maxh.top();
    }
};