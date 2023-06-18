
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0; // Starting index of the search range
        int end = nums.size() - 1; // Ending index of the search range

        while (start < end) {
            int mid = start + (end - start) / 2; // Calculate the middle index

            if (nums[mid] < nums[end]) {
                // If the element at the middle index is smaller than the element at the end index,
                // it means the minimum element lies in the left half, so update the end index
                end = mid;
            } else if (nums[mid] == nums[end]) {
                // If the element at the middle index is equal to the element at the end index,
                // it means there are duplicate elements in the array.
                // In this case, we can safely reduce the search range by moving the end index one step back.
                end--;
            } else {
                // If the element at the middle index is greater than the element at the end index,
                // it means the minimum element lies in the right half, so update the start index.
                start = mid + 1;
            }
        }
        
        // When the loop ends, the start index will point to the minimum element
        return nums[start];
    }
};
