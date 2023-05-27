class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        if(nums.size() == 0 || nums.size() == 1) { return nums; }
        int* left = new int[sizeof(int) * nums.size()];
        int* right = new int[sizeof(int) * nums.size()];
        int i, j;
        left[0] = 1;
        right[nums.size() - 1] = 1;
        for(i = 1; i < nums.size(); i++) { left[i] = nums[i - 1] * left[i - 1]; }
        for (j = nums.size() - 2; j >= 0; j--) { right[j] = nums[j + 1] * right[j + 1]; }
        for (i = 0; i < nums.size(); i++) { answer.push_back(left[i] * right[i]); }
        return answer;
    }
};
