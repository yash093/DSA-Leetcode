class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
       int x, y;
    priority_queue<int> maxh;
    for (int x : nums)
    {
      maxh.push(x);
    }

    while (maxh.size() > 1)
    {
      int a = maxh.top();
      maxh.pop();
      int b = maxh.top();
      maxh.pop();
      if (a > b)
      {
        y = a;
        x = b;
      }
      else
      {
        x = a;
        y = b;
      }
      maxh.push(y - x);
    }
    if (maxh.empty())
    {
      return 0;
    }
    return maxh.top(); 
    }
};