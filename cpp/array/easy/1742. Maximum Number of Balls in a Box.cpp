class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> m;
        for(int i = lowLimit; i <= highLimit; i++){
            int number = i;
            int index = 0;
            while(number){
                index += number % 10;
                number /= 10;
            }
            m[index]++;
        }
        int mx = 0;
        for(auto x:m){
            mx = max(mx,x.second);
        }
        return mx;
    }
};