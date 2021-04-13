class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return  (coordinates[1] - '0' + (coordinates[0] - 'a') * 9) % 2 == 0;
    }
};