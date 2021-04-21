class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int a:arr1){
            bool f = true;
            for(int b:arr2){
                if(abs(a-b) <= d){
                    f = false;
                    break;
                }
            }
            count += f? 1: 0;
        }
        return count;
    }
};