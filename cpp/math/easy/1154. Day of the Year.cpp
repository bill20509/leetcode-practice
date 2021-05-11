class Solution {
public:
    int dayOfYear(string date) {
        
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,7));
        int day = stoi(date.substr(8,10));
        int count = 0;
        vector<int> days = {31,28 + isYear(year),31,30,31,30,31,31,30,31,30,31};
        for(int i = 0; i < month - 1; i++){
            count += days[i];
        }
        count += day;
        
        return count;
    }
    int isYear(int year){
        return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
    }
};