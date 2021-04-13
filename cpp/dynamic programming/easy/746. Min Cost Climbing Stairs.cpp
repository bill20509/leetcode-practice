class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> v(cost.size() + 1);
        for(int i = 2; i <= cost.size(); i++){
            v[i] = min(v[i - 2] + cost[i - 2], v[i - 1] + cost[i-1]);
        }
        return v[cost.size()];
    }
};