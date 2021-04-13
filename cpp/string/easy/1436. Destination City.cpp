class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string start = paths[0][0];
        while(1){
            int i;
            bool flag = false;
            
            for(i = 0; i < paths.size(); i++){
                if(paths[i][0] == start){
                    flag = true;
                    break;
                }  
            }
            if(!flag) break;
            start = paths[i][1];
        }
        return start;
    }
};