class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        vector<bool> ans;
        int max = 0;
        for(auto x:arr){
            if(x>max){
                max = x;
            }
        }
        for(auto x:arr){
            if(x+k >= max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};