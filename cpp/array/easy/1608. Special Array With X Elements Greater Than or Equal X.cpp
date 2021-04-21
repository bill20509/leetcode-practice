class Solution {
public:
    int specialArray(vector<int>& nums) {
        int res = -1;
        for(int i = 0; i <= nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] >= i) count++;
            }
            if(count == i){
                return i;
            }
        }
        return -1;
    }
};