class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char , int>>rows(9) , cols(9);
        map<pair<int , int> , unordered_map<char , int>>squares;
        for (int i = 0 ; i < 9 ; i++){
            for (int j = 0 ; j < 9 ; j++ ){
                if (board[i][j] == '.') continue;
                char val = board[i][j];
                pair<int, int> square = {i / 3 , j / 3};
                if(rows[i][val] || cols[j][val] || squares[square][val]) return false;
                rows[i][val]++;
                cols[j][val]++;
                squares[square][val]++;
            }
        }
        return true;
    }
};
