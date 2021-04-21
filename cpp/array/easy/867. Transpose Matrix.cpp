class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();//m
        int col = matrix[0].size();//n
        vector<vector<int>> m(col, vector<int>(row, 0));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                m[j][i] = matrix[i][j];
            }
        }
        return m;
    }
};