typedef pair<int,int> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pi, vector<pi>, greater<pi>> minh; 
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(auto x:nums){
            mp[x]++;
        }
        
        for(auto i = mp.begin(); i != mp.end(); i++){
            minh.push({i->second,i->first});
            if(minh.size() > k){
                minh.pop();
            }
        }
        
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        return ans;
    }
};