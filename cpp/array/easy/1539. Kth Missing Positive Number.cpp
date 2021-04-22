class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i = 1, j = 0, t = 0; ;i++){
            if(j < n && arr[j] == i){
                j++;
            }
            else{
                if(++t == k) return i;
            }
        }
        return -1;
    }
};