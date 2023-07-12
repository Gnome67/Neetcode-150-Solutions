class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        for(int x = 0; x < t.size(); x++) { m[t[x]]++; }
        int left = 0, right = 0, counter = t.size(), minimumStart = 0, minimumLength = INT_MAX;
        while(right < s.size())
        {
            if(m[s[right]] > 0) { counter--; }
            m[s[right]]--;
            right++;
            while(counter == 0)
            {
                if(right - left < minimumLength)
                {
                    minimumStart = left;
                    minimumLength = right - left;
                }
                m[s[left]]++;
                if(m[s[left]] > 0) { counter++; }
                left++;
            }
        }
        if(minimumLength != INT_MAX) { return s.substr(minimumStart, minimumLength); }
        return "";
    }
};
