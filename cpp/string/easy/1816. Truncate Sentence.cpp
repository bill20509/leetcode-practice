class Solution {
public:
    string truncateSentence(string s, int k) {
        int end = 0;
        for(end = 0; end < s.size(); end++){
          if(s[end] == ' '){
              k--;
              if(k == 0){
            
                  break;
              }
          }
        }
        return s.substr(0,end);
    }
};