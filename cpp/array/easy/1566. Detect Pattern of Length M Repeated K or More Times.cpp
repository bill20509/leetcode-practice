class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {// m=  1 , k = 3
        int count = 0;
        int n = arr.size();
        if(n < m * k) return false;
        for(int i = 0; i < n - m; i++){
            if(arr[i] != arr[i+m]){
                count = 0;
            }
            else{
                if(++count == (k - 1) * m){
                    return true;
                }
            }
        }
        return false;
    }
};