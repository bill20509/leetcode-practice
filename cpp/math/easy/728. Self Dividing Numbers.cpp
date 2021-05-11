class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++){
            if(f(i)) res.push_back(i);
        }
        return res;
    }
    bool f(int num){
        int temp = num;
        while(temp){
            int div = temp % 10;
            if(div == 0 || num % div != 0) return false;
            temp /= 10;
        }
        return true;
    }
};