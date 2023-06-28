
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       // Start index of the search range
        int start = 0;
        // End index of the search range
        int end = nums.size() - 1;

        while (start < end) {
          // Middle index
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // If the current element is greater than the next element,
                // move the end index to search in the left half
                end = mid;
            } else {
                // If the current element is smaller or equal to the next element,
                // move the start index to search in the right half
                start = mid + 1;
            }
        }
         // Return the index of the peak element
        return start;
    }
};

