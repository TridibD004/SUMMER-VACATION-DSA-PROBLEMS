/*
PROBLEM :- Sqrt

QUESTION :- Given a non-negative integer x, compute and return the square root of x.Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
            Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
            
INPUT AND OUTPUT :-

Example 1:
  Input: x = 4
  Output: 2

Example 2:
  Input: x = 8
  Output: 2
  Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.*/
  
  //CODE :- [as the problem is from LEETCODE only the main part is done]

class Solution {
public:
int mySqrt(int x) {
int low=0;
int high=x;
int ans=-1;
while(low<=high)
{
long long mid=low+(high-low)/2;
long long square=mid*mid;
if(square==x)
{
return mid;
}
else if(square<x)
{
ans=mid;
low=mid+1;
}
else
{
high=mid-1;
}
}
return ans;
}
};
