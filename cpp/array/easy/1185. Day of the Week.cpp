class Solution {
public:
    bool leap(int year){
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int> days = {31, 28 + leap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum = 0;
        for(int i = 1970; i < year; i++){
            sum += 365 + leap(i);
        }
        for(int i = 1; i < month; i++){
            sum += days[i-1];
        }
        sum += day;
        return week[(sum + 3) % 7];
    }
};