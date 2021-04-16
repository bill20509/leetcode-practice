class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> m;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int num:nums){
            m[num]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(i && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < nums.size(); j++){
                if(j - 1 != i && nums[j] == nums[j-1]) continue;
                const int t = 0 - nums[i] - nums[j];
                if(t < nums[j]) continue;
                if(!m.count(t)) continue;
                if(m[t] >= 1 + (nums[i] == t) + (nums[j] == t)){
                    ans.push_back({nums[i], nums[j], t});
                }
            }
        }
        return ans;
    }
};