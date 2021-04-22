class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int c = 0;
        int r = n - 1;
        int l = 0;
        for(;; l++){
            c += arr[l] == 0? 2:1;
            if(c >= n){
                break;
            }
        }
        if(c > n){
            arr[r] = 0;
            l--;
            r--;
        }
        while(l != r){
            arr[r] = arr[l];
            r--;
            if(arr[l] == 0){
                arr[r] = 0;
                r--;
            }
            l--;
        }
    }
};