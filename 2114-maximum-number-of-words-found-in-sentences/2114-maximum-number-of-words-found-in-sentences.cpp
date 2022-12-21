class Solution {
public:
    int mostWordsFound(vector<string>& str) {
        int ans = INT_MIN;
        for(int i = 0; i < str.size(); i++){
            int count = 1;
            for(auto x:str[i]){
                if(x == ' ') count++;
            }
            if(count > ans) ans = count;
        }
        return ans;
    }
};