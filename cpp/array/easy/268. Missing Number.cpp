    class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            vector<bool> m(n+1, false);
            for(int& num:nums){
                m[num] = true;
            }
            for(int i = 0; i <= n; i++){
                if(!m[i]) return i;
            }
            return -1;
        }
    };