class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> maxh;
        unordered_map<char, int> mp;
        
        string ans = "";
        
        for(auto x:s){
            mp[x]++;
        }
        
        for(auto i = mp.begin(); i!= mp.end(); i++){
            maxh.push({i->second,i->first});
        }
        
        while(!maxh.empty()){
            for(int i = 0; i < maxh.top().first; i++){
                ans += maxh.top().second;
            }
            maxh.pop();
        }
        
        return ans;
    }
};
