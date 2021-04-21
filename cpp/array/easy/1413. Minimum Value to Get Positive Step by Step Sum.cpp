class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = INT_MAX;
        int count = 0;
        for(int num:nums){
            count += num;
            if(count < min) min = count;
        }
        return -min > 0? -min + 1:1;
    }
};