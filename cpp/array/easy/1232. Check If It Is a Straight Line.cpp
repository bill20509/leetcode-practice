class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x_diff = coordinates[0][0] - coordinates[1][0];
        int y_diff = coordinates[0][1] - coordinates[1][1];
        int n = coordinates.size();
        double slope = double(x_diff) / double(y_diff);
        if(x_diff == 0){
            for(int i = 0; i < n - 1; i++){
                if(coordinates[i][0] - coordinates[i+1][0]){
                    return false;
                }
            }
        }
        else if(y_diff == 0){
            for(int i = 0; i < n - 1; i++){
                if(coordinates[i][1] - coordinates[i+1][1]){
                    return false;
                }
            }
        }
        else{
            for(int i = 0; i < n - 1; i++){
                int x = coordinates[i][0] - coordinates[i+1][0];
                int y = coordinates[i][1] - coordinates[i+1][1];
                if(y == 0) return false;
                
                if(slope != double(x)/double(y)){
                    return false;
                }
            }
        }
        return true;
    }
};