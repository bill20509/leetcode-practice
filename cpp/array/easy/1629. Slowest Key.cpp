class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max_n = releaseTimes[0];
        int index = 0;
        for(int i = 1; i < releaseTimes.size(); i++){
            int temp = releaseTimes[i] - releaseTimes[i-1];
            if(max_n < temp){
                max_n = temp;
                index = i;
            }
            else if(max_n == temp){
                if(keysPressed[index] < keysPressed[i]){
                    index = i;
                }
            }
        }
        return keysPressed[index];
    }
};