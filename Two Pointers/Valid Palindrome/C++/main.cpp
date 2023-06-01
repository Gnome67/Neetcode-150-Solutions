class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0 || s.length() == 1) { return true; }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove(s.begin(), s.end(), '.'), s.end());
        s.erase(remove(s.begin(), s.end(), ','), s.end());
        s.erase(remove(s.begin(), s.end(), ':'), s.end());
        s.erase(remove(s.begin(), s.end(), '!'), s.end());
        s.erase(remove(s.begin(), s.end(), '@'), s.end());
        s.erase(remove(s.begin(), s.end(), '#'), s.end());
        s.erase(remove(s.begin(), s.end(), '_'), s.end());
        s.erase(remove(s.begin(), s.end(), '{'), s.end());
        s.erase(remove(s.begin(), s.end(), '}'), s.end());
        s.erase(remove(s.begin(), s.end(), '\''), s.end());
        s.erase(remove(s.begin(), s.end(), '"'), s.end());
        s.erase(remove(s.begin(), s.end(), '['), s.end());
        s.erase(remove(s.begin(), s.end(), ']'), s.end());
        s.erase(remove(s.begin(), s.end(), '-'), s.end());
        s.erase(remove(s.begin(), s.end(), '?'), s.end());
        s.erase(remove(s.begin(), s.end(), ';'), s.end());
        s.erase(remove(s.begin(), s.end(), '&'), s.end());
        s.erase(remove(s.begin(), s.end(), '('), s.end());
        s.erase(remove(s.begin(), s.end(), ')'), s.end());
        s.erase(remove(s.begin(), s.end(), '`'), s.end());
        //add any remaining characters to be removed
        if(s.length() == 0 || s.length() == 1) { return true; }
        bool answer = true;
        for (int x = 1; x < s.length(); x++)
        {
            cout << "Front: " << char(tolower(s[x-1])) << endl << "Back: " << char(tolower(s[s.length()-x])) << endl;
            if(char(tolower(s[x-1])) == char(tolower(s[s.length()-x])) && isalnum(char(tolower(s[x-1]))) && isalnum(char(tolower(s[s.length()-x]))))
            {
                answer = true;
            }
            else
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
};
