class Solution {
public:
    int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        int temp;
        if(n < 2) return n == 1? 1:0;
        for(int i = 1; i < n; i++){
            int temp = f0 + f1;
            f0 = f1;
            f1 = temp;
        }
        return f1;
    }
};