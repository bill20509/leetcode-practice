class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> s;
        for(int i:A){
            if(!s.insert(i).second)return i;
        }
        return -1;
    }
};