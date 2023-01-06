class Solution {
public:
    int numberOfSubstrings(string str) {
        int s = 0, e = 0, count = 0;
        unordered_map<char, int> mp;       
        
        while(e < str.length()){
            mp[str[e]]++;
            while(mp.size() == 3){
                count += str.size() - e;
                mp[str[s]]--;
                if(mp[str[s]] == 0) mp.erase(str[s]);
                s++;
            }
           e++;
        }
        return count;
    }
};