class Solution {
public:
    bool isPalindrome(string s) {
        //remove whitespace 
        //make all characters lowercase
        // reverse the string

        string newString = "";
        char c;
        
            for(char c : s){
            //for loop iterates through every char and checks if it is alphanumerical. isalnum() removes whitespace while checking if its alphanumerical.
            //if it is alphanumerical we make every char lowercase by incrementing the newString one char iteration at a time.
                if(isalnum(c)){
                    newString += tolower(c);
                }
            }

            return newString == string(newString.rbegin(), newString.rend());
        }
};
