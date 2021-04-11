#include <iostream>
#include <vector>
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> c(n,0);
        for(int i = 0; i < n; i++){
            c[i] = i+1;
        }
        int start = 0;
        while(c.size() > 1){
            start = (start + (k - 1)) % c.size();
            c.erase(c.begin()+start);
        }
        return c[0];
    }
};