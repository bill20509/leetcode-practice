class NumArray {
public:
    NumArray(vector<int>& nums) {
        int count = 0;
        acc.push_back(0);
        for(int num:nums){
            count += num;
            acc.push_back(count);
        }
    }
    
    int sumRange(int left, int right) {
        return acc[right+1] - acc[left];
    }
private:
    vector<int> acc;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */