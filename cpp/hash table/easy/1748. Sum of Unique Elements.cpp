class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        int count = 0;
        for(int num:nums){
            m[num]++;
        }
        for(const auto& kv: m){
            if(kv.second == 1) count += kv.first;
        }
        return count;
    }
};