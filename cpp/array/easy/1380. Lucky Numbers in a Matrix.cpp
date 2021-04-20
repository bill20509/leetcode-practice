class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i = 0; i < matrix.size(); i++){
            
                int min_index = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();
                int min_num = matrix[i][min_index];
                bool f = true;
                for(int k = 0; k < matrix.size(); k++){
                    if(matrix[k][min_index] > min_num){
                        f = false;
                        break;
                    }
                }
                if(f) res.push_back(min_num);
          
        }
        return res;
    }
};