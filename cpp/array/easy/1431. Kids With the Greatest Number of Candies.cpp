class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        for(int c:candies){
            if(c > max) max = c;
        }
        vector<bool> res;
        for(int c:candies){
            res.push_back(c+extraCandies >= max);
        }
        return res;
    }
};