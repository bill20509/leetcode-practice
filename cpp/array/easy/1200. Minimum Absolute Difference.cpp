class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int gap = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            gap = min(gap, arr[i] - arr[i-1]);
        }
        vector<vector<int>> res;
        for(int i = 1; i < arr.size(); i++){
            if(gap == arr[i] - arr[i-1]){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};