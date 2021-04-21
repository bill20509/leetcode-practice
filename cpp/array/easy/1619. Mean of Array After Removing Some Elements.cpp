class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i = arr.size() / 20;
        int size = arr.size() - 2*i;
        int count = accumulate(arr.begin() + i, arr.end() - i, 0);
        cout << count;
        return double(count)/size;
    }
};