class Solution {
public:
    string freqAlphabets(string s) {
        string res;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '#'){
                int count = int(s[i-1] - '0')  + 10* int(s[i-2] - '0');
                res = char('a' + count - 1) + res;
                i -=2;
            }
            else{
                res = char(s[i] - '1' + 'a') + res;
            }
    
        }
        return res;
    }
};