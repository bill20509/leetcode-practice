class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<bool>> res(m, vector(n, false));
        for(auto index:indices){
            for(int i = 0; i < n; i++){
                res[index[0]][i] = !res[index[0]][i];
            }
            for(int i = 0; i < m; i++){
                res[i][index[1]] = !res[i][index[1]];
                
            }
        }
        
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(res[i][j]) count++;
            }
        }
        return count;
    }
};