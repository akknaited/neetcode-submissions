class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> str;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.' && str.find(board[i][j]) == str.end())
                {
                    str[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> stolb;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.' && stolb.find(board[j][i]) == stolb.end())
                {
                    stolb[board[j][i]] = 1;
                }
                else if (board[j][i] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.' && bl1.find(board[i][j]) == bl1.end())
                {
                    bl1[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.' && bl2.find(board[i][j]) == bl2.end())
                {
                    bl2[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.' && bl3.find(board[i][j]) == bl3.end())
                {
                    bl3[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl4;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.' && bl4.find(board[i][j]) == bl4.end())
                {
                    bl4[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl5;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.' && bl5.find(board[i][j]) == bl5.end())
                {
                    bl5[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl6;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.' && bl6.find(board[i][j]) == bl6.end())
                {
                    bl6[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl7;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != '.' && bl7.find(board[i][j]) == bl7.end())
                {
                    bl7[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl8;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] != '.' && bl8.find(board[i][j]) == bl8.end())
                {
                    bl8[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        unordered_map<char, int> bl9;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] != '.' && bl9.find(board[i][j]) == bl9.end())
                {
                    bl9[board[i][j]] = 1;
                }
                else if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }
        return true;
    }
};
