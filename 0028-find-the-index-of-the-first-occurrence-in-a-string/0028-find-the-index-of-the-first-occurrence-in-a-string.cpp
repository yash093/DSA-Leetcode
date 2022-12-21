class Solution {
public:
    int strStr(string haystack, string needle) {
        int s = 0,e = 0;
        while(e < haystack.length()){
            if(e-s+1 == needle.length()){
                if(haystack.substr(s,e-s+1) == needle) return s;
                else s++;
            }
            e++;
        }
        return -1;
    }
};