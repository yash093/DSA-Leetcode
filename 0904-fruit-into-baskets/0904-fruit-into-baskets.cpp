class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = INT_MIN;
        int s = 0, e = 0; //start index and end index
        unordered_map<int,int> mp;
        
        while(e < fruits.size()){
            mp[fruits[e]]++;
            if(mp.size() > 2){
                mp[fruits[s]]--;
                if(mp[fruits[s]] == 0) mp.erase(fruits[s]);
                s++;
            }
            ans = max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};