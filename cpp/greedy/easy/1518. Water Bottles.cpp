class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = 0;
        int full = numBottles;
        int empty = 0;
        while(full || full + empty >= numExchange){
            count += full;
            empty += full;
            full = empty / numExchange;
            empty = empty % numExchange;
        }
        return count;
    }
};