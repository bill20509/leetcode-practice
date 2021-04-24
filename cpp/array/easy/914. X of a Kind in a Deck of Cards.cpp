class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int max_l = INT_MIN;
        unordered_map<int, int> m;
        for(int& num : deck){
            if(++m[num] > max_l) max_l = m[num];
        }
        int i = 2;
        while(i <= max_l){
            bool f = true;
            for(auto& v: m){
                if(v.second % i != 0){
                    f = false;
                    break;
                }
            }
            if(f) break;
            i++;
        }
        return i != (max_l + 1);
    }
};