class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> indices;
        int max = INT_MIN;
        for(int& num:nums){
            ++m[num];
            if(m[num] > max){
                max = m[num];
                indices.clear();
                indices.push_back(num);
            }
            else if(m[num] == max){
                indices.push_back(num);
            }
        }
        int minN = INT_MAX;
        for(int& index:indices){
            int i = find(nums.begin(), nums.end(), index) - nums.begin();
            int e = i;
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] == index) e = j;
            }
            minN = min(minN, e - i + 1);
        }
        return minN;
    }
};