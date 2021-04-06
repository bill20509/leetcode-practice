class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int l = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                l++;
                if(l > count)count = l;
                cout<< i;
            }
            else if(s[i] == ')') l--;
            else continue;
        } 
        return count;
    }
};