class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> m;
        for(string& s: emails){
            string res;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '@'){
                    res += s.substr(i);
                    break;
                }
                else if(s[i] == '.'){
                    continue;
                }
                else if(s[i] == '+'){
                    while(s[i] != '@')i++;
                    i--;
                }
                else{
                    res += s[i];
                }
            }
           
            m.insert(res);
        }
        return m.size();
    }
};