/*Integer To Roman

Another question which belongs to the category of questions which are intentionally stated vaguely. 

Expectation is that you will ask for correct clarification or you will state your assumptions before you start coding.

Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

Note : This question has a lot of scope of clarification from the interviewer. Please take a moment to think of all the needed clarifications and see the expected response using “See Expected Output”

For the purpose of this question, https://projecteuler.net/about=roman_numerals has very detailed explanations.




Input Format

The only argument given is integer A.
Output Format

Return a string denoting roman numeral version of A.
Constraints

1 <= A <= 3999
For Example

Input 1:
    A = 5
Output 1:
    "V"

Input 2:
    A = 14
Output 2:
    "XIV"*/

//CODE:- (only functiion part)
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
