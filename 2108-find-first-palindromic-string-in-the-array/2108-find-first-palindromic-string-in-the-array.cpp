class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto x:words){
            if(isPalindrome(x) == true){
                return x;
            }
        }
        return "";
    }
    bool isPalindrome(string x){
        int s = 0;
        int e = x.length()-1;
        
        while(s < e){
            if(x[s] != x[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};