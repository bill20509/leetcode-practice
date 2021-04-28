class Solution {
public:
    string sortString(string s) {
        vector<int> m(26, 0);
        int count = 0;
        for(char& c:s){
            m[c - 'a']++;
            count++;
        }
        string res = "";
        while(count){
            for(int i = 0; i < 26; i++){
                if(m[i]){
                    m[i]--;
                    count--;
                    res += 'a' + i;
                }
            }
            for(int i = 25; i >= 0; i--){
                if(m[i]){
                    m[i]--;
                    count--;
                    res += 'a' + i;
                }
            }
        }
        return res;
    }
};