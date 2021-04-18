class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int num:nums){
            int e = 0;
            while(num){
                num /= 10;
                e++;
            }
            count += e % 2? 0:1;
        }
        return count;
    }
};