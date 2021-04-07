class Solution {
public:
    int countPrimes(int n) {
        if(n < 3) return 0;
        vector<bool> f(n, true);
        for(int i = 2; i <= sqrt(n); i++){
            for(int j = i+i; j < n; j += i){
                f[j] = false;
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++){
            if(f[i])count ++;
        }
        return count;
    }
};