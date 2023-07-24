class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowRow = 0, highRow = matrix.size() - 1, lowColumn = 0, highColumn = matrix[0].size() - 1;
        while (lowRow < highRow)
        {
            int mid = lowRow + (highRow - lowRow) / 2;
            if (matrix[mid][0] == target) { return true; }
            if (matrix[mid][0] < target && target < matrix[mid + 1][0])
            {
                lowRow = mid;
                break;
            }
            if (matrix[mid][0] < target) { lowRow = mid + 1; }
            else { highRow = mid - 1; }
        }
        while (lowColumn <= highColumn)
        {
            int mid = lowColumn + (highColumn - lowColumn) / 2;
            if (matrix[lowRow][mid] == target) { return true; }
            if (matrix[lowRow][mid] < target) { lowColumn = mid + 1; }
            else { highColumn = mid - 1; }
        }
        return false;
    }
};
