class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = -1 , min_len = INT_MAX;
        for(int i = 0; i < points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                int len = abs(points[i][0] - x) + abs(points[i][1] - y);
                if(len < min_len){
                    index = i;
                    min_len =len;
                }
            }
        }
        return index;
    }
};