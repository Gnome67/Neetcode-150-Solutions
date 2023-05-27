class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedAnagrams;
        unordered_map<string, vector<string>> m;
        for(int x = 0; x < strs.size(); x++)
        {
            string y = strs[x];
            sort(y.begin(), y.end());
            m[y].push_back(strs[x]);
        }
        for(auto z:m)
        {
            groupedAnagrams.push_back(z.second);
        }
        return groupedAnagrams;
    }
};
