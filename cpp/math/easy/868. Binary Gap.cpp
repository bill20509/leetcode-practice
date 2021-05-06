class Solution {
public:
    int binaryGap(int n) {
        int i = 0;
        int curr = -1;
        int max = 0;
        while(n){
            if(n % 2 == 1){
                if(curr != -1){
                    if(i - curr > max){
                        max = i - curr;
                    }
                    
                }
                curr = i;
            }
            n /= 2;
            i++;
        }
        return max;
    }
};