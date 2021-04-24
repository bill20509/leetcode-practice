class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 1;
        int temp = arr[0];
        bool up = false;
        bool down = false;
        if(arr.size() == 1) return false;
        for(; i < arr.size(); i++){
            if(arr[i] > temp){
                temp = arr[i];
                up = true;
            }
            else{
                break;
            }
        }
        for(; i < arr.size(); i++){
            if(arr[i] < temp){
                temp = arr[i];
                down = true;
            }
            else{
                break;
            }
        }
        return i == arr.size() && up && down;
    }
};