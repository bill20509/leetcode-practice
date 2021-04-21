class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
        if(row * col != r * c) return nums;
        vector<int> temp;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(auto& row:nums){
            for(int num:row){
                temp.push_back(num);
            }
        }
        int start = 0;
        for(int i = 0; i < r;  i++){
            for(int j = 0; j < c; j++){
                res[i][j] = temp[start++];
            }
        }
        return res;
            
    }
};