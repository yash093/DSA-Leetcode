class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countPos = 0, countZero = 0;
        for(int x:nums) {
            if(x == 0) countZero++;
            else if(x > 0) countPos++;
        }
        int negCount = nums.size() - countPos - countZero;
        return max(negCount, countPos);
    }
};