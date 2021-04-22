class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s(arr.begin(), arr.end());
        vector<int> res;
        unordered_map<int, int> m;
        int prev = INT_MAX;
        int i = 1;
        for(const int v : s){
            m[v] = i++;
        }
        for(int num:arr){
            res.push_back(m[num]);
        }
        return res;
    }
};