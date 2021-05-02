class Solution {
public:
    vector<int> diStringMatch(string s) {
        char c = s[0];
        vector<int> res;
        int l = 0;
        int r = s.size();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'I'){
                res.push_back(l++);
            }
            else{
                res.push_back(r--);
            }
        }
        res.push_back(r--);
        return res;
    }
};