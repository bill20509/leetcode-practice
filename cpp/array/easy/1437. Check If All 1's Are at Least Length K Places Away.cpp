class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int gap = 0;
        int i = 0;
        for(; i < nums.size(); i++){
            if(nums[i] == 1) break;
        }
        i++;
        for(; i < nums.size(); i++){
            if(nums[i] == 1){
                if(gap < k) return false;
                gap = 0;
            }
            else{
                gap++;
            }
        }
        return true;
    }
};