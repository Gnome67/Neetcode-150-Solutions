class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int x = 0; x < n; x++) { if(nums[x] == target) { return x; } }
        return -1;
    }
};
