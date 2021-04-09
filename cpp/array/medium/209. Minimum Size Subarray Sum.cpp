class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int window = nums[0];
        int len = INT_MAX;
        int slow = 0;
        int fast = 0;
        bool f = false;
        while(fast < nums.size()){
            //cout << slow << " " << fast << " " << window<<endl;
            if(window < target){
                fast++;
                if(fast == nums.size()) break;
                window += nums[fast];
            }
            else{
                len = min(len, fast - slow + 1);
                f = true;
                window-=nums[slow];
                slow++;
            }
        }
        return f? len:0;
    }
};