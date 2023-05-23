class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftIndex = findInLeft(nums, target);
    int rightIndex = findInRight(nums, target);
    return {leftIndex, rightIndex};
  }
   int findInLeft(vector<int> nums, int target)
  {
    int ans = -1;
    int s = 0, e = nums.size() - 1;
    while (s <= e)
    {
      int m = s + (e - s) / 2;
      if (nums[m] == target)
      {
        ans = m;
        e = m - 1;
      }
      else if (nums[m] > target)
      {
        e = m - 1;
      }
      else
      {
        s = m + 1;
      }
    }
    return ans;
  }
   int findInRight(vector<int> nums, int target)
  {
    int ans = -1;
    int s = 0, e = nums.size() - 1;
    while (s <= e)
    {
      int m = s + (e - s) / 2;
      if (nums[m] == target)
      {
        ans = m;
        s = m + 1;
      }
      else if (nums[m] > target)
      {
        e = m - 1;
      }
      else
      {
        s = m + 1;
      }
    }
    return ans;
  }
};
