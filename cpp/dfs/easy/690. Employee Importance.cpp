/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int count = 0;
        int num = 0;
        for(int i = 0; i < employees.size(); i++){
            if(employees[i]->id == id) num = i;
        }
        for(auto child:employees[num]->subordinates){
            count += getImportance(employees, child);
        }
        return employees[num]->importance + count;
    }
};