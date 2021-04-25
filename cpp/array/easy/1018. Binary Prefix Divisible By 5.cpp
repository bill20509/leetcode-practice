class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res;
        int count = 0;
        for(int&num : A){
            count *= 2;
            count += num;
            count %= 5;
            res.push_back(count == 0);
        }
        return res;
    }
};