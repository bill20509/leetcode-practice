class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int start = 0;
        for(int g:gain){
            start += g;
            if(start > max) max = start;
        }
        return max;
    }
};