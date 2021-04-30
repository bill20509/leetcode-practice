class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        string res;
        for(int i = 0; i < min(w1, w2); i++){
            res += word1[i];
            res += word2[i];
        }
        res += w1 >= w2? word1.substr(min(w1, w2)):word2.substr(min(w1, w2));
        return res;
    }
};