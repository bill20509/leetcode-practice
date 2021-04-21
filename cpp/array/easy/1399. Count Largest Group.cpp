class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> m(40,0);
        int max = INT_MIN;
        for(int i = 1; i <= n; i++){
            int digit = 0;
            int num = i;
            while(num){
                digit += num % 10;
                num /= 10;
            }
            if(++m[digit] > max) max = m[digit];
        }
        int count = 0;
        for(int i = 1; i < 40; i++){
            if(max == m[i]) count++;
        }
        return count;
    }
};