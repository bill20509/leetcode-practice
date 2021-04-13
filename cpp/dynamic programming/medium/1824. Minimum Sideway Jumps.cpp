class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        vector<int> t({1,0,1});
        int size = obstacles.size();
        for(int i = 0; i < size; i++){
           
            if(obstacles[i])
                t[obstacles[i]-1] = 1e9;
            for(int j = 0; j < 3; j++){
                if(j != obstacles[i] - 1)
                    t[j] = min({t[j], t[(j+1) % 3] + 1, t[(j + 2) % 3] + 1}); 
            }
         
        }
        return min({t[0],t[1],t[2]});
    }
};