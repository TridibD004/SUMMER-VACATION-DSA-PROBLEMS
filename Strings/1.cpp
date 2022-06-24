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

string Solution::intToRoman(int a) {
    string str="";
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string banan[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(a>0)
    {
        int d=a/num[i];
        a=a%num[i];
        while(d)
        {
            str=str+banan[i];
            d--;
        }
        i--;
    }
    return str;
}
