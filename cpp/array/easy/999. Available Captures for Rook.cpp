class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x, y;
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 'R'){
                    x = j;
                    y = i;
                    break;
                }
            }
        }
        int count = 0;
        for(int i = y; i < m; i++){
            if(board[i][x] == 'p'){
                count ++;
                break; 
            }
            else if(board[i][x] == 'B'){
                break;
            }
        }
        for(int i = y; i >= 0; i--){
            if(board[i][x] == 'p'){
                count ++;
                break; 
            }
            else if(board[i][x] == 'B'){
                break;
            }
        }
        for(int i = x; i >= 0; i--){
            if(board[y][i] == 'p'){
                count ++;
                break; 
            }
            else if(board[y][i] == 'B'){
                break;
            }
        }
         for(int i = x; i < n; i++){
            if(board[y][i] == 'p'){
                count ++;
                break; 
            }
            else if(board[y][i] == 'B'){
                break;
            }
        }
        return count;
    }
};