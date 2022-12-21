class Solution {
public:
    int guessNumber(int n) {
        int s = 1, e = n; // s start, e = end
        while(s <= e){
            int m = s+(e-s)/2; // m = mid of start and end;
            if(guess(m) == -1) e = m - 1;
            else if(guess(m) == 1) s = m + 1;
            else return m;
        }
        return -1;
    }
};