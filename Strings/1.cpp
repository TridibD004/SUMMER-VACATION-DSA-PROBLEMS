/*Longest Common Prefix

Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".

Input Format
The only argument given is an array of strings A.

Output Format
Return the longest common prefix of all strings in A.

Example Input
Input 1:

A = ["abcdefgh", "aefghijk", "abcefgh"]
Input 2:

A = ["abab", "ab", "abcd"];

Example Output
Output 1:
"a"
Output 2:
"ab"

Example Explanation
Explanation 1:
Longest common prefix of all the strings is "a".
Explanation 2:
Longest common prefix of all the strings is "ab".*/

//CODE:-(only function part is done)

string Solution::longestCommonPrefix(vector<string> &a) {
    int n=a.size();
    sort(a.begin(),a.end());
    int n1=a[0].size();
    int n2=a[n-1].size();
    string s="";
    if(n1<n2)
    {
        for(int i=0;i<n1;i++)
        {
            if(a[0][i]==a[n-1][i])
                s.push_back(a[0][i]);
            else
                break;        
        }
    }
    else
    {
        for(int i=0;i<n2;i++)
        {
            if(a[0][i]==a[n-1][i])
                s.push_back(a[0][i]);
            else
                break;        
        }
    }
    return s;
}


