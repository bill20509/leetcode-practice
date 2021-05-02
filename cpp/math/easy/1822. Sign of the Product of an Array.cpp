class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 1;
        for(int num:nums){
            count *= f(num);
        }
        return count;
    }
    int f(int count){
        if(count > 0) return 1;
        else if(count < 0) return -1;
        else return 0;
    }
};