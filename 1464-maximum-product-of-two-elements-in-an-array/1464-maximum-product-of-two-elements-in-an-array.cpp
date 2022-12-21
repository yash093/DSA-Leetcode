class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Declaring min heap
        priority_queue<int, vector<int>, greater<int>> minh;
        
        for(auto x:nums){
            minh.push(x);
            if(minh.size() > 2){
                minh.pop();
            }
        }
        int ans = 1;
        while(!minh.empty()){
            ans = ans * (minh.top()-1);
            minh.pop();
        }
        return ans;
    }
};