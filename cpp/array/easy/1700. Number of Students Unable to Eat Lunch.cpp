class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count = 0;
        while(sandwiches.size() > 0 && students.size() > 0 && count < sandwiches.size()){
            if(students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                count = 0;
            }
            else{
                int p = students[0];
                students.erase(students.begin());
                students.push_back(p);
                count++;
            }
        }

        return students.size();
    }
};