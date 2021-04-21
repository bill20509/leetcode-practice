class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> m(202,0);
        int max = 0;
        for(int num:nums){
            if(++m[num+100] > max) max = m[num+100];
        }
        vector<int> res;
        for(int i = 1; i <= max; i++){
            for(int j = 200; j >= 0; j--){
                if(m[j] == i){
                    for(int k = 0; k < i; k++)
                        res.push_back(j-100);
                }
            }
        }
        return res;
    }
};