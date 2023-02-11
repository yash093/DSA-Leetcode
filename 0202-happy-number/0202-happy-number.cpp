class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = func(slow);
            fast = func(func(fast));
        }while(slow != fast);
        return slow == 1;
    }
    int func(int n){
        int sum = 0;
        while(n){
            sum += pow(n%10,2);
            n /= 10;
        }
        return sum;
    }
};