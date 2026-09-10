class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char> rows[9], columns[9], boxes[9];
        for (int y{0}; y < 9; y++){
            for (int x{0}; x< 9; x++){
                char d = board[y][x];
                if (d == '.'){
                    continue;
                }
                if (!rows[y].insert(d).second){
                    return false;
                }
                if (!columns[x].insert(d).second){
                    return false;
                }
                if (!boxes[((y/3)*3)+(x/3)].insert(d).second){
                    return false;
                }
            }
        }
        return true;
    }
};
