class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<vector<int>> b(A.size(), vector(26, 0));
        vector<string> res;
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++){
                char c = A[i][j];
                b[i][c-'a']++;
            }
        }
        for(int i = 0; i < 26; i++){
            int min = INT_MAX;
            for(int j = 0; j < A.size(); j++){
                if(min > b[j][i]){
                    min = b[j][i];
                }
            }
            char c = 'a' + i;
            for(int j = 0; j < min; j++){
                res.push_back(string(1, c));
            }
        }
        return res;
    }
};