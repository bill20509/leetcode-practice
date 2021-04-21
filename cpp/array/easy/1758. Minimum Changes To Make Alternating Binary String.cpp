class Solution {
public:
    int minOperations(string s) {
        int res = INT_MAX;
        int count1 = 0;
        int temp1 = s[0] - '0';
        for(int i = 1; i < s.size(); i++){
            if(temp1 != (s[i] -'0')){
                temp1 = (s[i] -'0');
            }
            else{
                count1++;
                temp1 = (temp1+1) % 2;
            }
        }
        int count2 = 1;
        int temp2 = (s[0] - '0' + 1) % 2 ;
        for(int i = 1; i < s.size(); i++){
            if(temp2 != (s[i] -'0')){
                temp2 = (s[i] -'0');
            }
            else{
                count2++;
                temp2 = (temp2+1) % 2;
            }
        }
        return min(count1,count2);
    }
};