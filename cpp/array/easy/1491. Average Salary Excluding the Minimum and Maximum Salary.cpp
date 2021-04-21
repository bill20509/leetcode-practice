class Solution {
public:
    double average(vector<int>& salary) {
        int acc = accumulate(salary.begin(), salary.end(),0);
        int min = *min_element(salary.begin(), salary.end());
        int max = *max_element(salary.begin(), salary.end());
        return double(acc-max-min)/(salary.size() - 2);
    }
};