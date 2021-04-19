class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int i = 1;
        for(int j = 0; j < n/2; j++){
            res.push_back(i);
            res.push_back(-1 * i);
            i++;
        }
        if(n % 2 == 1) res.push_back(0);
        return res;
    }
};