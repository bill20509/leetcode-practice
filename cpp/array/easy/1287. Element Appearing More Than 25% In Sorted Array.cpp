class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double time = arr.size()/4.0;
        int count = 0;
        int temp = arr[0];
        for(int& num:arr){
            if(temp == num){
                if(++count > time) return num;
            }
            else{
                count = 1;
                temp = num;
            }
        }
        return -1;
    }
};