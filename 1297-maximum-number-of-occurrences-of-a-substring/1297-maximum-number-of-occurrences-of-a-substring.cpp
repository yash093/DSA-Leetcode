class Solution {
public:
    int maxFreq(string str, int maxLetters, int minSize, int maxSize) {
        int s = 0, e = 0, ans = 0;
        unordered_map<char,int> mp1; 
        unordered_map<string,int> mp2;
        
        while(e < str.length()){
            mp1[str[e]]++;
            while(e-s+1 > minSize || mp1.size() > maxLetters){
                mp1[str[s]]--;
                if(mp1[str[s]] == 0) mp1.erase(str[s]);
                s++;
            }
            if(e-s+1 == minSize && mp1.size() <= maxLetters){
                ans = max(ans, ++mp2[str.substr(s,minSize)]);
            }
            e++;
        }
        return ans;
    }
};