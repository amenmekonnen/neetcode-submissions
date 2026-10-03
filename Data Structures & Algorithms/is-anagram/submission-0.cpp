class Solution {
public:
    bool isAnagram(string s, string t) {
           //how to assign vector to test cases
          //sort(first, last, comp);
          //coollect all unique from string s .contains
          //coiunt the amount of each unique element //use .length
          //and then compare it to string
          //if string s contain same char as string t return true
          //else return false
        
        
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
        
            return s == t;
    }


         

};
            