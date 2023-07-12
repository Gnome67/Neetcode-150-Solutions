class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> answer;
        int maxSize = 0, left = 0, right = 0;
        while(right < s.size())
        {
            while(answer.find(s[right]) != answer.end())
            {
                answer.erase(s[left]);
                left++;
            }
            maxSize = max(maxSize, right - left + 1);
            answer.insert(s[right]);
            right++;
        }
        return maxSize;
    }
};
