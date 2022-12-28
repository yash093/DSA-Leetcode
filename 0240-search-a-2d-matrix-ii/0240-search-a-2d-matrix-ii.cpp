class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r = 0, c = mat[0].size() - 1; // r = row, c = column
        while(r < mat.size() && c >= 0){
            if(mat[r][c] == target) return true;
            else if(mat[r][c] > target) c--;
            else r++;
        }
        return false;
    }
};