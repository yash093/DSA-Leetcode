class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, temp = INT_MAX;
        for(int x:prices){
            if(x < temp) temp = x;
            ans = max(ans,x-temp);
        }
        return ans;
    }
};