class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> table({".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."});
        for(string word:words){
            string temp;
            for(char c:word){
                temp += table[c-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};