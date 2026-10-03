public class Solution
 {
    public bool IsAnagram(string s, string t)
     {
       if(s.Length != t.Length)
       {
        return false;
       }
       char[] sSort = s.ToCharArray();
       char[] tSort = t.ToCharArray();

       Array.Sort(sSort);
       Array.Sort(tSort);
       return sSort.SequenceEqual(tSort);
     }
 }
 //start by checking if the length of the string are even equal to each other.
 //turn the strings into an array so that it can be sorted
 //check if the sequences are equal
