/*
PROBLEM :- Kadane's Algorithm

QUESTION :-Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

INPUT AND OUTPUT :- 

Example 1:
  Input:
  N = 5
  Arr[] = {1,2,3,-2,5}
  Output:
  9
  Explanation:
  Max subarray sum is 9
  of elements (1, 2, 3, -2, 5) which 
  is a contiguous subarray.
Example 2:
  Input:
  N = 4
  Arr[] = {-1,-2,-3,-4}
  Output:
  -1
  Explanation:
  Max subarray sum is -1 
  of element (-1)*/

//CODE:- 

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=0,max1=-99999;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
            max1=max(max1,ans);
            if(ans<0)
            ans=0;
        }
        return max1;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
