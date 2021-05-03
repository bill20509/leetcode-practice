class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = s.size() - 1;
        int l = 0;
        while(r > l){
            swap(s[r], s[l]);
            r--;
            l++;
        }
    }
};