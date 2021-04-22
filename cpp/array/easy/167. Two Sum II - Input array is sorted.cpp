class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>::iterator it;
        for(int i = 0; i < n - 1; i++){
            it = find(numbers.begin() + i + 1, numbers.end(), target - numbers[i]);
            if(it != numbers.end()){
                int index = it - numbers.begin();
                return {i + 1, index + 1};
            }
        }
        return {};
    }
};