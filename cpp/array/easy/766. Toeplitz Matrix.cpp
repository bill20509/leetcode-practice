class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix[0].size(); i++){
            int k = i;
            int j = 0;
            int val = matrix[j][i];
            while(j < matrix.size() && k < matrix[0].size()){
                if(val != matrix[j][k]){
                    return false;
                }
                k++;
                j++;
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            int k = i;
            int j = 0;
            int val = matrix[i][0];
            while(j < matrix[0].size() && k < matrix.size()){
                if(val != matrix[k][j]){
                    return false;
                }
                k++;
                j++;
            }
        }
        return true;
    }
};