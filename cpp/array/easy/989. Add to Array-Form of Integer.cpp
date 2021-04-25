class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        bool carry = false;
        for(int i = n - 1; i >= 0; i--){
            if(k == 0 && !carry) break;
            int temp = k % 10;
            k /= 10;
            num[i] += temp + carry;
            if(num[i] >= 10){
                num[i] %= 10;
                carry = true;
            }
            else{
                carry = false;
            }
        }
        while(k || carry){
            int temp = k % 10  + carry;
            k /= 10;
            num.insert(num.begin(), temp % 10);
            if(temp >= 10){
                carry = true;
            }
            else{
                 carry = false;
            }
           
        }
        
        return num;
    }
};