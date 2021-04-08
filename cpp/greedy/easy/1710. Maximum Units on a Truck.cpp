class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int s) {
        sort(b.begin(),b.end(),[](const auto& L, const auto& R){return L[1] > R[1];});
        int ans = 0;
        int temp;
        for(int i = 0; s > 0 && i < b.size(); i++){
            temp = s - b[i][0] > 0 ? b[i][0]: s;
            ans = ans + temp * b[i][1];
            s -= temp;
        }
        return ans;
    }
};

