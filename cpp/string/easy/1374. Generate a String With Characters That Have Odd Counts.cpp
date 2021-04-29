class Solution {
public:
    string generateTheString(int n) {
        string res;
        for(int i = 0;i < n - 1; i++){
            res += 'a';
        }
        res += n % 2 == 0? 'b':'a';
        return res;
    }
};