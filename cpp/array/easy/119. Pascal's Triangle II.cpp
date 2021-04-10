class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> a{1};
        for(int i = 1; i <= rowIndex; i++){
            vector<int> temp{1};
            for(int j = 1; j < i; j++){
                temp.push_back(a[j-1] + a[j]);
            }
            temp.push_back(1);
            a = temp;
        }
        return a;
    }
};