class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int index = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= first && nums[i] > second){
                second = first;
                first = nums[i];
                index = i;
            }
            else if(nums[i] < first && nums[i] >= second){
                second = nums[i];
            }
        }
        if(second == 0 || second == INT_MIN) return index;
        return first / second >= 2? index:-1;
    }
};