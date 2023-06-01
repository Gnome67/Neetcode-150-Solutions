class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j = numbers.size()-1;
        while(i<j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum<target) { i++; }
            else if(sum>target) { j--; }
            else { return vector{i+1, j+1}; }
        }
        return vector{-1, -1};
        // for(int x = 0; x < numbers.size(); x++)
        // {
        //     for(int y = x + 1; y < numbers.size(); y++)
        //     {
        //         if(numbers[x] + numbers[y] == target)
        //         {
        //             answer.push_back(x+1);
        //             answer.push_back(y+1);
        //             return answer;
        //         }
        //     }
        // }
    }
};
