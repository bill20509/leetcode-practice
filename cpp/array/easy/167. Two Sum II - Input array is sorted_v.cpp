class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        int lv = numbers[l];
        int rv = numbers[r];
        while(1){
            lv = numbers[l];
            rv = numbers[r];
            if(lv + rv < target){
                l++;
            }
            else if(lv + rv > target){
                r--;
            }
            else{
                return {l + 1 , r + 1};
            }
        }
        return {};
    }
};