class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        vector<int> row(mat.size(),1);
        for(int i = 0; i < mat[0].size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(mat[j][i] == 0 && row[j]){
                    res.push_back(j);
                    row[j] = 0;
                }
                if(res.size() == k) return res;
            }
        }
        int i = 0;
        while(res.size() < k){
            if(row[i] == 1){
                res.push_back(i);
                row[i] = 0;
            }
            i++;
        }
        return res;
    }
};