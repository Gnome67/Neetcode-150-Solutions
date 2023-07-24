class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n = nums.size();
        // int x = ceil((n)/2);
        // while(x != n)
        //    if(nums[x] == target) { return target; }
        //    if(nums[x] < target) { x++; }
        //    if(nums[x] > target) { x--; }
        // }
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) { low = mid + 1; }
            else if (nums[mid] > target) { high = mid - 1; }
            else { return mid; }
        }
        return -1;
    }
};
