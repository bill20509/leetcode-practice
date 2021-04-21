class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int count = 0;
        for(int& num:A){
            if(num % 2 == 0) count += num;
        }
        vector<int> res;
        for(auto q:queries){
            if((A[q[1]]) % 2 == 0){
                count += (A[q[1]] + q[0]) % 2 == 0? q[0]: -1 * A[q[1]];
                A[q[1]] += q[0];
            }
            else{
                count += (A[q[1]] + q[0]) % 2 == 0? A[q[1]] + q[0]: 0;
                A[q[1]] += q[0];
            }
            res.push_back(count);
        }
        return res;
    }
};