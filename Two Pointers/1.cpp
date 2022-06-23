/*
PROBLEM :- 3 Sum

QUESTION :- Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
            Return the sum of the three integers.
            Assume that there will only be one solution
  
INPUT AND OUTPUT :- 
Example: 
  given array S = {-1 2 1 -4}, 
  and target = 1.
  The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)*/

//CODE :- [as the code is from Interviewbit ao only the function part is done ]

int Solution::threeSumClosest(vector<int> &a, int x) {
    sort(a.begin(),a.end());
    int i=0;
    int sum,diff,min=INT_MAX;
    int n=a.size();
    while(i<n-2)
    {
        int l=i+1;
        int r=n-1;
        while(r>l)
        {
            int d=a[i]+a[l]+a[r];
            diff=abs(d-x);
            if(diff==0)
            return x;
            if(diff<min)
            {
                min=diff;
                sum=d;
            }
            if(d<x)
            l++;
            else
            r--;
        }
        i++;
    }
    return sum;
}
