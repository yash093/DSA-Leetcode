class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //brute force approach
        unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
        
        for(auto x:mp){
          if(x.second == 1) return x.first;
        }
        return -1;
    }
};