class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        
        while( fast < nums.size()){
            while(nums[fast] == nums[slow]){
                fast++;
                if(fast == nums.size())return slow + 1;
            }   
            nums[++slow] = nums[fast];
        }
        return slow;
    }
};