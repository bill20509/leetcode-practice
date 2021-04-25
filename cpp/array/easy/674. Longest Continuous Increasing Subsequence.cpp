class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int max_count = 1;
        int n = nums.size();
        if(n == 0) return 0;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] < nums[i+1]){
                max_count = max(max_count, ++count);
                cout << count;
            }
            else{
                count = 1;
            }
        }
        return max_count;
    }
};