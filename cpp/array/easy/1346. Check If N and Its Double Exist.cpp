class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int>m;
        for(int& num : arr){
            m[num]++;
            if(num == 0 && m[0] > 1){
                return true;
            }
            else if(num == 0){
                continue;
            }
            if(num % 2 == 0 && m[num/2.0]) return true;
            if(m[num * 2]) return true;
        } 
        return false;
    }
};