class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxl = -1;
        int count = 0;
        for(vector<int> &p:rectangles){
            int len = min(p[0], p[1]);
            if(len > maxl){
                maxl = len;
                count = 1;
            }
            else if(len == maxl){
                count ++;
            }
        }
        return count;
    }
};