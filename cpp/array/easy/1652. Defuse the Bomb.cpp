class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size = code.size();
        vector<int> res(size, 0);
        if(k == 0){
            return res;
        }
        else if(k > 0){
            for(int i = 0; i < size; i++) {
                int count = 0;
                for(int t = 1; t <= k; t++) {
                    count += code[(i + t) % size];
                }
                res[i] = count;
            }
        }
        else{
            for(int i = 0; i < size; i++){
                int count = 0;
                for(int t = 1; t <= -1 * k; t++) {
                    int index = i - t < 0? size + (i - t): i - t;
                    count += code[index];
                }
                res[i] = count;
            }
        }
        return res;
    }
};