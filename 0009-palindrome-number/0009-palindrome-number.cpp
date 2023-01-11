class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0, temp = x;
        while(x > 0){
            rev = rev * 10 + x%10;
            x /= 10;
        }
        return rev == (long) temp;
    }
};