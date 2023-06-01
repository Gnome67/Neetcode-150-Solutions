class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        if(nums.size() < 3) { return answer; }
        vector<int> myVector;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(nums[i] > 0) { break; }
            if(i > 0 && nums[i - 1] == nums[i]) { continue; }
            int j = i + 1, k = nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) { j++; }
                else if(sum > 0) { k--; }
                else
                {
                    answer.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) { j++; }
                    j++;
                    while (j < k && nums[k - 1] == nums[k]) { k--; }
                    k--;
                }
            }
        }
        return answer;
    }
};
