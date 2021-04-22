class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int acc = accumulate(arr.begin(), arr.end(), 0);
        if(acc % 3 != 0) return false;
        int count = 0;
        int time = 0;
        for(int num:arr){
            count += num;
            if(count == acc / 3){
                count = 0;
                time++;
            }
        }
        return time >= 3;
    }
};