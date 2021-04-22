class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int l = 0;
        for(int& num:nums){
            if(num == 1){
                count++;
                l = max(l, count);
            }
            else{
                count = 0;
            }
        }
        return l;
    }
};