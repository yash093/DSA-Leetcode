class Solution {
public:
    bool isPalindrome(string str) {
        string temp = "";
        for(auto x:str){
            if (isalpha(x)) temp += tolower(x);
            else if(isdigit(x) && x != ' ') temp+=x;
        }   
        int s = 0, e = temp.length() - 1;
        while(s < e){
            if(temp[s] != temp[e]) return false;
            s++, e--;
        }
        return true;
    }
};