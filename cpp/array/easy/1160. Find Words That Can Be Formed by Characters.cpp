class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> m(26, 0);
        for(char c:chars){
            m[c-'a']++;
        }
        int count = 0;
        for(string s:words){
            bool f = true;
            vector<int> mm(m);
            for(char c:s){
                if(--mm[c-'a'] < 0){
                    f = false;
                    break;
                }
            }
            if(f) count += s.size();
        }
        return count;
    }
};