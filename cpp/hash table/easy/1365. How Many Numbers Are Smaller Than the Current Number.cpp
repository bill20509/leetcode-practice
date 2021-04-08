class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int cnt[102] = {0};
        for(auto num:nums){
            cnt[num]++;
        }
        for(int i = 1; i < 101; i++){
            cnt[i] += cnt[i-1];
        }
        vector<int> res;
        for(int num:nums){
            if(num == 0)res.push_back(0);
            else res.push_back(cnt[num-1]);
        }
        return res;
    }
};