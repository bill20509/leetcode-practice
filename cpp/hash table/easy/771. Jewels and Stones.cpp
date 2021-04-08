class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        set<char> s(jewels.begin(), jewels.end());
        for(char c:stones){
            if(s.count(c)) count++;
        }
        return count;
    }
};