/*
PPROBLEM :- Find Smallest Letter Greater Than Target

QUESTION :- Given a characters array letters that is sorted in non-decreasing order and a character target, 
            return the smallest character in the array that is larger than target.
            
INPUT AND OUTPUT :-

Example 1:
  Input: letters = ["c","f","j"], target = "a"
  Output: "c"
Example 2:
  Input: letters = ["c","f","j"], target = "c"
  Output: "f"
Example 3:
  Input: letters = ["c","f","j"], target = "d"
  Output: "f"*/

//CODE:-  [as the problem is from LEETCODE only the main part is done]
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        int flag=0;
        for(int i=0;i<letters.size();i++)
        {
            flag++;
            
            if(int(letters[i])>int (target))
            {
                return letters[i];
            }
        }
       
        
        return letters[0];
    }
};
