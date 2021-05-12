class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0) return 1;
        int res = 0;
        int index = 1;
        while(N){
            res += !(N % 2) * index;
            N /= 2;
            index *= 2;
        }
        return res;
    }
};