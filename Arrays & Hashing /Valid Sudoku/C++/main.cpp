class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool isValid = true;
        unordered_map<string,bool> boardCheck;
        for(int x = 0; x < 9; x++) //row by row
        {
            for(int y = 0; y < 9; y++) //column by column
            {
                if(board[x][y] != '.')
                {
                    string r = "R" + to_string(x) + to_string(board[x][y]);
                    string c = "C" + to_string(y) + to_string(board[x][y]);
                    int boxNum = 3 * (x/3) + (y/3);
                    string b = "B" + to_string(boxNum) + to_string(board[x][y]);

                    if(!boardCheck.insert({r,true}).second || !boardCheck.insert({c,true}).second || !boardCheck.insert({b,true}).second) { return false; }
                }
            }
        }
        return isValid;
    }
};
