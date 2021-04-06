class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int old = image[sr][sc];
        function<void(int sr, int sc)> dfs = [&](int sr, int sc){
            
            if(sr < 0 || sr >= image.size())return;
            if(sc < 0 || sc >= image[sr].size())return;
            if(old != image[sr][sc] || newColor == image[sr][sc]) return;
            image[sr][sc] = newColor;
            
            dfs(sr+1,sc);
            dfs(sr-1,sc);
            dfs(sr,sc+1);
            dfs(sr,sc-1);
        };
        dfs(sr, sc);
        return image;
    }
};