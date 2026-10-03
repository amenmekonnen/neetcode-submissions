class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //returns false if the length of both strings are not the same

        if(s.length() != t.length()){
            return false;
        }
        
        // if the length of the strings are the same we map each string
        //we use unordered because strings can be in different order. what matters are the char keys and if they hold the same values to the other string
        
        unordered_map<char, int> mapS;
        unordered_map<char, int> mapT;

        //we create a for loop to loop through the length of the string 
        //we then increment the the map based on frequency of string s and string t 

        for(int i = 0; i < s.length(); i++){
            mapS[s[i]]++;
            mapT[t[i]]++;
        }
        //lastly we check to see if the maps are equal to each other
        //if it is it the function will return true, else false
        return mapS == mapT;
    }
};
