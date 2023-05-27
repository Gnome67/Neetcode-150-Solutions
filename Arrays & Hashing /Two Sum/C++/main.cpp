class Solution {
public:
    bool isAnagram(string s, string t) {
        int lenS = s.length();
        int lenT = t.length();
        if(lenS != lenT) {return false; }
        unordered_map <char,int> anagram;
        for(int x = 0; x < lenS; x++)
        {
            anagram[s[x]]++;
            anagram[t[x]]--;
        }
        for(auto y:anagram) {
            if(y.second) { return false; }
        }
        return true;
    }
};
