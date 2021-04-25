class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        for(int i = 0; i < n; i++){
            int start = nums[i];
            int end = nums[i];
            for(int j = i + 1; j < n && i < n; j++){
                if(end + 1 == nums[j]){
                    end = nums[j];
                    i++;
                }
                else{
                    break;
                }
            }
            if(start == end){
                res.push_back(to_string(start));
            }
            else{
                res.push_back(to_string(start) + "->" + to_string(end));
            }
        }
        return res;
    }
};