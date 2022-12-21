class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(auto x:operations){
            (x == "X++" || x == "++X") ? ans++ : ans--;
        }
        return ans;
    }
};  