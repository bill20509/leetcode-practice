class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        stack<int> s;
        s.push(INT_MAX);
        int ans = 0;
        for(int& num: arr){
            while(s.top() <= num){
                int m = s.top(); s.pop();
                ans += m * min(s.top(), num);
            }
            s.push(num);
        }
        while(s.size() > 2){
            int left = s.top(); s.pop();
            int mid = s.top();
            ans += left *mid;
        }
        return ans;
    }
};