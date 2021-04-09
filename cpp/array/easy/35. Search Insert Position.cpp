class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int m;
        int r = nums.size() - 1;// define target in [l,r]
        while( l <= r){
            m = (l + r) / 2;
            if(nums[m] < target) {
                l = m + 1;
            }
            else if(nums[m] > target) {
                r = m - 1;
            }
            else if(nums[m] == target) return m;
        }
        return r + 1;
    }
};