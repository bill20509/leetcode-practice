class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        int n = mat.size();
        for(int i = 0; i < n; i++){
            count += mat[i][i];
        }
        for(int i = 0; i < n; i++){
            count += mat[n - i - 1][i];
        }
        if(n % 2) count -= mat[n/2][n/2];
        return count;
    }
};