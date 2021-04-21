class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i = 0; i < mat[0].size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(mat[j][i]){
                    if(f(mat, i, j)) count++;
                }
            }
        }
        return count;
    }
    bool f(vector<vector<int>>& mat, int x , int y){
        for(int i = 0; i < mat.size(); i++){
            if(mat[i][x] == 1 && i != y ) return false;
        }
        for(int j = 0; j < mat[0].size(); j++){
            if(mat[y][j] == 1 && j != x ) return false;
        }
        return true;
    }
};