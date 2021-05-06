class Solution {
public:
    int maximum69Number (int num) {
        int i = 10;
        int index = 0;
        while(i/10 < num){
            if((num % i) / (i / 10) == 6){
                index = i/10;
            } 
            i *= 10;
        }
        return num + 3 * index;
    }
};