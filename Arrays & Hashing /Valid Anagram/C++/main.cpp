class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for(int x = 0; x < nums.size(); x++)
        {
            for(int y = x + 1; y < nums.size(); y++)
            {
                if(nums.at(x) + nums.at(y) == target)
                {
                    sum.push_back(x);
                    sum.push_back(y);
                    return sum;
                }
            }
        }
        return sum;
    }
};
