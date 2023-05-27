class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> u;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        { u[nums.at(i)]++; }
        vector<pair<int, int>> v(u.begin(), u.end());
        sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y)
        {
            if (x.second == y.second) { return x.first < y.first; }
            else { return x.second > y.second; }
        } );
        vector<int> r;
        for (int i = 0; i < k; i++) { r.push_back(v[i].first); }
        return r;
    }
};
