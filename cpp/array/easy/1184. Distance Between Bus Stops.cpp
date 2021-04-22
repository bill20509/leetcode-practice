class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int a = 0;
        int b = 0;
        int n = distance.size();
        int i = start;
        while(i != destination){
            a += distance[i];
            i = (i + 1) % n;
        }
        while(i != start){
            b += distance[i];
            i = (i + 1) % n;
        }
        return min(a,b);
    }
};