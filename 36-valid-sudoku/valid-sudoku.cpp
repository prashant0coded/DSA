class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        vector<unordered_set<char>> rowset(9);
        vector<unordered_set<char>> colset(9);
        vector<unordered_set<char>> boxset(9);
        
        for(int i=0 ;i<9;i++){
            for(int j=0; j<9;j++){
                if(board[i][j]!='.'){
                    int box=(i/3)*3+(j/3);
                    if(rowset[i].count(board[i][j])){
                        return false;
                    }
                    else if(colset[j].count(board[i][j])){
                        return false;
                    }
                    else if(boxset[box].count(board[i][j])){
                        return false;
                    }
                    else{
                        rowset[i].insert(board[i][j]);
                        colset[j].insert(board[i][j]);
                        boxset[box].insert(board[i][j]);
                    }
                }

            }
        }
        return true;  
    }
};