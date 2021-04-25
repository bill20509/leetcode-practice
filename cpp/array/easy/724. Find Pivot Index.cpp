class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int&num :nums){
            sum += num;
        }
        int l = 0;
        int r = sum;
        for(int i = 0; i < nums.size(); i++){
            l += i-1 >= 0 ? nums[i-1]:0;
            r -= nums[i];
            if(l == r) return i;
        }
        return -1;
    }
};