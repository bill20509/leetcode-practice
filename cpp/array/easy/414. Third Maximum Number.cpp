class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int num:nums){
            s.insert(num);
            if(s.size() > 3) s.erase(s.begin());
        }
        cout << s.size();
        return s.size() != 3 ? *s.rbegin(): *s.begin(); 
    }
};