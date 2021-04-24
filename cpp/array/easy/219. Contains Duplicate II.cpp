class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]].push_back(i);
        }
        for(auto& v : m){
            if(v.second.size() >= 2){
                for(int i = 1; i < v.second.size(); i++){
                    if(v.second[i] - v.second[i-1] <= k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};