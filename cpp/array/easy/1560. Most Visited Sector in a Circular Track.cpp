class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int k = rounds.size();
        vector<int> count(n + 1, 0);
        for(int i = 0; i < rounds.size() - 1; i++){
            int start = rounds[i];
            int end = rounds[i+1];
            for(int j = start ; j != end;){
                cout << j;
                count[j]++;
                j = (j  %  n)  + 1; 
            }
        }
        count[rounds[k - 1]] ++;
        vector<int> res;
        int max_l = INT_MIN;
        
            
        for(int i = 1; i < count.size(); i++){
            if(count[i] > max_l){
                res.clear();
                res.push_back(i);
                max_l = count[i];
            }
            else if(count[i] == max_l){
                res.push_back(i);
            }
        }
        return res;
    }
};