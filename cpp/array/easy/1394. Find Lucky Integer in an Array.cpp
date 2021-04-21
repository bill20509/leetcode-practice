class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> m(501, 0);
        for(int num:arr){
            m[num]++;
        }
        bool f =false;
        int i;
        for(i = 500; i >= 1; i--){
            if(m[i] == i){
                f = true;
                break;
            }
        }
        return f? i: -1;
    }
};