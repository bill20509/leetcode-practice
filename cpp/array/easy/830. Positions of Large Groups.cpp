class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        char c = s[0];
        int count = 1;
        int start = 0;
        int i;
        for(i = 1; i < s.size(); i++){
            if(c == s[i]){
                count++;
            }
            else{
                if(count >= 3){
                    res.push_back({start, i - 1});
                }
                count = 1;
                start = i;
                c = s[i];
            }
        }
        if(count >= 3){
            res.push_back({start, i - 1});
        }
        return res;
    }
};