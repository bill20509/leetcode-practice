class Solution {
public:
    int countVowelStrings(int n) {
        int dp[52][5];
        for(int i = 0; i < 5; i++) dp[0][i] = 1;
        for(int i = 1; i < n; i++){
            int count = 0;
            for(int j = 4; j >= 0; j--){
                count += dp[i-1][j];
                dp[i][j] = count;
            }
        }
        int ans = 0;
        for(int i = 0; i < 5; i++) ans += dp[n-1][i];
        return ans;
    }
};