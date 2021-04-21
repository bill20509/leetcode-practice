class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int i = 0;
        
        for(int j = 0; j < arr2.size(); j++){
            for(int k = i + 1; i < arr1.size() && k < arr1.size();){
                if(arr1[i] == arr2[j]){
                    i++;
                }
                else if(arr1[k] != arr2[j]){
                    k++;
                }
                else{
                    swap(arr1[i],arr1[k]);
                    i++;
                    k = i + 1;
                }
            }
        }
        sort(arr1.begin()+i,arr1.end());
        return arr1;
    }
};