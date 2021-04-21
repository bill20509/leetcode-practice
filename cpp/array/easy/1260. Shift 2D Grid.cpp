class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        deque<int> q;
        for(auto& row:grid){
            for(int& num:row){
                q.push_back(num);
            }
        }
        while(k){
            int tail = q.back();
            q.push_front(tail);
            q.pop_back();
            k--;
        }
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                grid[i][j] = q.front();
                q.pop_front();
            }
        }
        return grid;
    }
};