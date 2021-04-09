class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int d = 0;// 0:right 1:down 2:left 3:up;
        int x = 0;
        int y = 0;
        int val = 1;
        while(val <= n*n){
            //cout << y << " " << x << " " << d <<endl;
            res[y][x] = val;
            if(d == 0 && ( x + 1 == n || res[y][x+1] )) d++;
            if(d == 1 && ( y + 1 == n || res[y+1][x] )) d++;
            if(d == 2 && ( x - 1 == -1 || res[y][x-1] )) d++;
            if(d == 3 && ( y - 1 == -1 || res[y-1][x] )) d = 0;
            
            if(d == 0) x++;
            else if(d == 1) y++;
            else if(d == 2) x--;
            else if(d == 3) y--;
            
            val++;
        }
        return res;
    }
};