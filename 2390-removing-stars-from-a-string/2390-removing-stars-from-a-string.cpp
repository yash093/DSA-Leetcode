class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans = "";
        for(auto x:s){
            if(!st.empty() && x == '*'){
                st.pop();
            }else if(x!='*'){
                st.push(x);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};