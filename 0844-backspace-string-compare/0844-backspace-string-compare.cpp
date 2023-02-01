class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = func(s), s2 = func(t);
        if(s1 == s2) return true;
        return false;
    }
    string func(string s){
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && x == '#'){
                st.pop();
            }else if(x != '#'){
                st.push(x);
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};