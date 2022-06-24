/*Longest Palindromic Substring

Problem Description

Given a string A of size N, find and return the longest palindromic substring in A.

Substring of string A is A[i...j] where 0 <= i <= j < len(A)

Palindrome string:

A string which reads the same backwards. More formally, A is palindrome if reverse(A) = A.

Incase of conflict, return the substring which occurs first ( with the least starting index).



Input Format
First and only argument is a string A.



Output Format
Return a string denoting the longest palindromic substring of string A.



Example Input
A = "aaaabaaa"


Example Output
"aaabaaa"


Example Explanation
We can see that longest palindromic substring is of length 7 and the string is "aaabaaa".*/

//CODE:- (only function part )
string Solution::longestPalindrome(string s) {
        int n=s.size();
        if(n<2) 
        return s;
        int maxLen=1,start=0;
        int low,high;
        for(int i=0;i<n;i++){
            low=i-1;
            high=i+1;
            while(high<n && s[high]==s[i]) 
                high++;
            while(low>=0 && s[low]==s[i]) 
                low--;
            while(low>=0 && high<n && s[low]==s[high])
            { 
                high++; 
                low--;
            }
            int len=high-low-1;
            if(maxLen < len)
            {
                maxLen=len;
                start=low+1;
            }
        }
        return s.substr(start,maxLen);
}
