typedef pair<int,char>  pi;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        priority_queue<pi, vector<pi>, greater<pi>> minh;

        for(int i = 0; i < s.length(); i++) minh.push({indices[i], s[i]});
        while(minh.size() > 0){
            ans += minh.top().second;
            minh.pop();
        }
        return ans;
    }
};