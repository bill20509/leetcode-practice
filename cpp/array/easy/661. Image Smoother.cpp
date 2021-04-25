class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m = M.size();
        int n = M[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int x_1 =  max(j - 1, 0);
                int y_1 =  max(i - 1, 0);
                int x_2 =  min(n - 1, j + 1);
                int y_2 =  min(m - 1, i + 1);
                int count = 0;
                int num = 0;
                for(int x = x_1; x <= x_2; x++){
                    for(int y = y_1; y <= y_2; y++){
                        count += M[y][x];
                        num++;
                    }
                }
                res[i][j] = count / num;
            }
        }
        return res;
    }
};