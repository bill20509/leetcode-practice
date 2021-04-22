class Solution {
public:
  int findShortestSubArray(vector<int>& nums) {
    unordered_map<int, vector<int>> m;
    for(int i = 0; i < nums.size(); i++){
        m[nums[i]].push_back(i);
    }
    size_t degree = 0;
    for(const auto& index: m){
        degree = max(degree, index.second.size());
    }
    int ans = INT_MAX;
    for(const auto& index: m){
        if(degree != index.second.size()) continue;
        ans = min(ans, index.second.back() - index.second.front() + 1);
    }
    return ans;
  }
};