class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res{{1}};
        for(int i = 1; i < numRows; i++){
            vector<int> a{1};
            for(int j = 1; j < i; j++){
                a.push_back(res[i-1][j-1] + res[i-1][j]);
            }
            a.push_back(1);
            res.push_back(a);
        }
        return res;
    }
};