class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j == 0){
                    if(matrix[i][j]) dp[i][j] = 1;
                }
                else if(matrix[i][j]) dp[i][j] = dp[i][j-1] + matrix[i][j];
               
            }
    
        }
        int k = min(m,n);
        int count = 0;
        for(int l = 1; l <= k; l++){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(dp[i][j] >= l){
                        bool f = true;
                        for(int o = 0; o < l; o++){
                            if(i - o < 0 || dp[i-o][j] < l){
                                f = false;
                                break;
                            }
                        }
                        count += f? 1:0;
                    }
                }
            }
          
        }
        return count;
    }
};