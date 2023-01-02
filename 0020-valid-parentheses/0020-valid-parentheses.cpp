class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else  {
                if(st.empty()) return false;
                else if(st.top() == '(' && s[i] != ')') return false;
                else if(st.top() =='[' && s[i] != ']') return false;
                else if(st.top() == '{' && s[i] != '}') return false;
                else st.pop();
            }
        }
       if(st.empty())
            return true;
        return false;
    }
};