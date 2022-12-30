class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> mp;
        for(int i = 0; i < messages.size(); i++){
            int wordsCount = count(messages[i].begin(), messages[i].end(), ' ') + 1;
            mp[senders[i]] += wordsCount;
        }
        string ans = "";
        int c = 0;
        for(auto x:mp){
            if(x.second >= c){
                c = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};