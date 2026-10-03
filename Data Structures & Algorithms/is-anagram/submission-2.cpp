class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() !=  t.length()) {
            return false;
        }

        unordered_map <char, int> counterS;
        unordered_map <char, int> counterT;

        for(int i = 0; i < s.length(); i++) {
                counterS[s[i]]++;
                counterT[t[i]]++;
        }
        return counterS == counterT;
    }
    
};
