class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        vector<int> p_num;
        vector<int> n_num;
        for(int&num :nums){
            if(num >= 0) p_num.push_back(num);
            else n_num.push_back(num);
        }
        sort(p_num.begin(), p_num.end());
        sort(n_num.begin(), n_num.end());
        int max_l = INT_MIN;
        int pn = p_num.size();
        int nn = n_num.size();
        if(pn >= 3){
            max_l = max(max_l, p_num[pn - 1] * p_num[pn - 2] * p_num[pn - 3]);
        }
        if(pn >= 1 && nn >= 2){
            max_l = max(max_l, n_num[0] * n_num[1] * p_num[pn - 1]);
        }
        if(nn >= 3){
            max_l = max(max_l, n_num[nn - 1] * n_num[nn - 2] * n_num[nn - 3]);
        }
        return max_l;
    }
};