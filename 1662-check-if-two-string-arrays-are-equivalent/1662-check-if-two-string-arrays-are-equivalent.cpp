class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return func(word1) == func(word2);
    }
    string func(vector<string> str){
        string ans = "";
        for(auto x:str){
            ans += x;
        }
        return ans;
    }
};