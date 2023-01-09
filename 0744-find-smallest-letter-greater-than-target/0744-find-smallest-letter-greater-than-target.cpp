class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s = 0, e = letters.size() - 1;
        while(s <= e){
            int m = s +(e-s)/2;
            if(target >= letters[m]) s = m + 1;
            else e = m -  1;
        }
        return  letters[s % letters.size()];
    }
};