class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> a_row(3,0);
        vector<int> a_col(3,0);
        vector<int> a_dia(2,0);
        vector<int> b_row(3,0);
        vector<int> b_col(3,0);
        vector<int> b_dia(2,0);
        for(int i = 0; i < moves.size(); i++){
            if(i % 2 == 0){
                int y = moves[i][0];
                int x = moves[i][1];
                if(++a_col[y] == 3) return "A";
                if(++a_row[x] == 3) return "A";
                if(x == 1 && y == 1){
                    if(++a_dia[0] == 3) return "A";
                    if(++a_dia[1] == 3) return "A";
                }
                else if(x - y == 0){
                    if(++a_dia[0] == 3) return "A";
                }
                else if(abs(x - y) == 2){
                    if(++a_dia[1] == 3) return "A";
                }
            }
            else{
                int y = moves[i][0];
                int x = moves[i][1];
                if(++b_col[y] == 3) return "B";
                if(++b_row[x] == 3) return "B";
                if(x == 1 && y == 1){
                    if(++b_dia[0] == 3) return "B";
                    if(++b_dia[1] == 3) return "B";
                }
                else if(x - y == 0){
                    if(++b_dia[0] == 3) return "B";
                }
                else if(abs(x - y) == 2){
                    if(++b_dia[1] == 3) return "B";
                }
            }
        }
        if(moves.size() == 9) return "Draw";
        return "Pending";
    }
};