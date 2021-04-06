class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return f(word1) == f(word2);
    }
    string f(vector<string>& word){
        string res = "";
        for(int i = 0; i < word.size(); i++){ 
            res += word[i];
        }
        return res;
    }
};