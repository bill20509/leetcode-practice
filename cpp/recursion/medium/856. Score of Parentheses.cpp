class Solution {
public:
    int scoreOfParentheses(string S) {
        return f(S, 0, S.size() - 1);
    }
    int f(string s, int l, int r){
        if(r - l <= 1) return 1;
        int d = 0;
        for(int i = l; i < r; i++){
            if(s[i] == '(') d++;
            if(s[i] == ')') d--;
            if(d == 0)
                return f(s, l, i) + f(s, i + 1, r);
        }
        return 2 * f(s, l + 1, r - 1);
    }
};