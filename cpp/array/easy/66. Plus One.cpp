class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        for(int i = 0; i < digits.size(); i++){
            if(digits[i] + 1 > 9){
                digits[i] = 0;
                if(i == digits.size() - 1) digits.push_back(0);
            }
            else{
                digits[i]++;
                break;
            }
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};