class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> v(26,false);
        for(int i = 0; i < allowed.size(); i++){
            v[allowed[i] - 'a'] = true;
        }
        int count = 0;
        for(string word:words){
            bool f = true;
            for(int i = 0; i < word.size(); i++){
                if(!v[word[i] - 'a']){
                    f = false;
                    break;
                }
            }
            if(f) count++;
        }
        return count;
    }
};