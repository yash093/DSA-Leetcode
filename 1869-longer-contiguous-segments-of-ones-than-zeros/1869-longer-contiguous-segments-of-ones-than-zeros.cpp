class Solution {
public:
    bool checkZeroOnes(string s) {
         return func(s,'1') > func(s,'0');   
    }
    int func(string s, char c){
        int count = 0, ans = 0;
        for(auto x:s){
            if(x == c){
                count++;
                ans = max(count,ans);
            }else{
                count = 0;
            }
        }
        return ans;
    }
};