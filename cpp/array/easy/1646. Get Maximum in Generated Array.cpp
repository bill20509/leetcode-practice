class Solution {
public:
    int getMaximumGenerated(int n) {
        int max = INT_MIN;
        vector<int> res(n + 1,0);
        if(n == 0) return 0;
        if(n == 1) return 1;
        res[0] = 0;
        res[1] = 1;
    
     
            for(int i = 2; i <= n; i++){
                if( i % 2 == 0){
                    res[i] = res[i/2];
                }
                else{
                    res[i] = res[i/2] + res[i/2 + 1];
                }
            }
    
        return *max_element(res.begin(), res.end());
    }
};