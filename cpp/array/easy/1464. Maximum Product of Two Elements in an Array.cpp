class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = max_element(nums.begin(), nums.end()) - nums.begin();
        int aa = nums[a];
        nums[a] = 0;
        int b = max_element(nums.begin(), nums.end()) - nums.begin();
        int bb = nums[b];
        return (aa-1) * (bb-1);
    }
};