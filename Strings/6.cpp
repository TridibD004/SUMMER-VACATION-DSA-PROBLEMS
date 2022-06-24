/*Reverse the String


Return the string A after reversing the string word by word.

NOTE:

A sequence of non-space characters constitutes a word.

Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

If there are multiple spaces between words, reduce them to a single space in the reversed string.


 Input Format

The only argument given is string A.
Output Format

Return the string A after reversing the string word by word.
For Example

Input 1:
    A = "the sky is blue"
Output 1:
    "blue is sky the"

Input 2:
    A = "this is ib"
Output 2:
    "ib is this"

Input 3:
 A = " hello world "
Output 3:
 "world hello"*/

//CODE:-( only function part )
string Solution::solve(string s) {
    string ans="";
    int n=s.size();
    int i=n-1;
    string temp="";
    while(i>=0)
    {
        while(i>=0 && s[i]==' ')
            i--;
        while(i>=0 && s[i]!=' ')
        {
            temp=s[i]+temp;
            i--;
        }
         if(temp!="")
         {
            ans+=temp;
            ans+=' ';
         }
         temp="";
    }
   ans.pop_back();
   return ans;
}
