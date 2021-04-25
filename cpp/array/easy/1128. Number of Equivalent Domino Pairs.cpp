class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> m;
        int n = dominoes.size();
        for(auto& v : dominoes){
            int a = min(v[0], v[1]);
            int b = max(v[0], v[1]);
            m[pair<int, int>(a, b)]++;
        }
        int count = 0;
        for(auto& v :m){
            int x = v.second - 1;
            // cout << x << endl;
            count += (x + 1) * x /2;
        }
        return count;
    }
};