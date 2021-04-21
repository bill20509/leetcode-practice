class Solution {
public:
    bool check(vector<int>& nums) {
        for(int j = 0; j < nums.size(); j++){
            bool f = true;
            int temp = nums[j];
            for(int i = 0; i < nums.size(); i++){
                if(temp > nums[(j + i) % nums.size()]){
                    f = false;
                    break;
                }
                temp = nums[(j + i) % nums.size()];
            }
            if(f) return true;
        }
        
        return false;
    }
};