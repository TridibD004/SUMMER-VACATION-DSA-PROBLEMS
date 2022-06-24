"""Vowel and Consonant Substrings!
 
Given a string A consisting of lowercase characters.

You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

Return the count of substring modulo 109 + 7.



Problem Constraints
1 <= |A| <= 105

A consists only of lower-case characters.



Input Format
First argument is an string A.



Output Format
Return a integer denoting the the number of substrings in A which starts with vowel and end with consonants or vice-versa with modulo 109 + 7.



Example Input
Input 1:

 A = "aba"
Input 2:

 A = "a"


Example Output
Output 1:

 2
Output 2:

 0


Example Explanation
Explanation 1:

 Substrings of S are : [a, ab, aba, b, ba, a]Out of these only 'ab' and 'ba' satisfy the condition for special Substring. So the answer is 2.
Explanation 2:

 No possible substring that start with vowel and end with consonant or vice-versa."""

#CODE :- (only function part)
class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        vow = 0
        con = 0
        for i in range(0, len(A)):
            if A[i] in ["a", "e", "i", "o", "u"]:
                vow = vow + 1
            else:
                con = con + 1
        count = (vow * con) % 1000000007
        return count

