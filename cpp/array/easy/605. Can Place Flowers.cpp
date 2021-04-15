class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && n <= 1 && flowerbed[0]  == 0) return true;
        for(int i = 0; i < flowerbed.size() && n != 0; i++){
            if(i == 0){
                if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
                     n--;
                     flowerbed[i] = 1;
                     i++;
                }
            }
            else if(i == flowerbed.size()-1){
                if(flowerbed[i] == 0 && flowerbed[i-1] == 0){
                     n--;
                     flowerbed[i] = 1;
                     i++;
                }
            }
            else if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                n--;
                flowerbed[i] = 1;
                i++;
            }
        }
        return n == 0;
    }
};