class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), min = INT_MAX;
        for(int x = 0; x < nums.size(); x++)
        {
            if(nums[x] < min) { min = nums[x]; }
        }
        return min;
    }
};
