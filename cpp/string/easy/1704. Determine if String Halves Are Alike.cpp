class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<bool> v(150,false);
        vector<char> c({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        
        for(int i = 0; i < c.size(); i++){
            v[c[i] -'A'] = true;
        }
        int counta = 0;
        int countb = 0;
        for(int i = 0; i < s.size()/2; i++){
            if(v[s[i] - 'A']) counta++;
        }
        for(int i = s.size()/2; i < s.size(); i++){
            if(v[s[i] - 'A']) countb++;
        }
        return counta == countb;
    }
};